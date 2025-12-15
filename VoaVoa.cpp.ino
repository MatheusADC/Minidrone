#include <Wire.h>

// --------- PINOS ----------
const int MOTOR_FL = 1;  // Front-Left
const int MOTOR_FR = 2;  // Front-Right
const int MOTOR_BL = 4;  // Back-Left
const int MOTOR_BR = 5;  // Back-Right

const int PINO_BATERIA = 6;
const int PINO_SCL = 7;
const int PINO_SDA = 8;

// --------- PWM LEDC ---------
const int PWM_FREQ = 8000;    // 8 kHz
const int PWM_RES  = 10;      // 10 bits = 0–1023
const int PWM_MIN  = 0;
const int PWM_TEST = 180;     // potência baixinha
const int PWM_HOVER = 150;    // pairando
const int PWM_MAX  = 900;

// --------- FUNÇÕES ----------
void iniciarMotores() {
  ledcSetup(0, PWM_FREQ, PWM_RES);
  ledcSetup(1, PWM_FREQ, PWM_RES);
  ledcSetup(2, PWM_FREQ, PWM_RES);
  ledcSetup(3, PWM_FREQ, PWM_RES);

  ledcAttachPin(MOTOR_FL, 0);
  ledcAttachPin(MOTOR_FR, 1);
  ledcAttachPin(MOTOR_BL, 2);
  ledcAttachPin(MOTOR_BR, 3);

  ledcWrite(0, PWM_MIN);
  ledcWrite(1, PWM_MIN);
  ledcWrite(2, PWM_MIN);
  ledcWrite(3, PWM_MIN);
}

void setMotores(int pwm) {
  ledcWrite(0, pwm);
  ledcWrite(1, pwm);
  ledcWrite(2, pwm);
  ledcWrite(3, pwm);
}

// --------- MPU ----------
void iniciarMPU() {
  Wire.begin(PINO_SDA, PINO_SCL);
  delay(200);

  Wire.beginTransmission(0x68);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
}

void lerMPU() {
  Wire.beginTransmission(0x68);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(0x68, 6, true);

  int16_t accX = Wire.read() << 8 | Wire.read();
  int16_t accY = Wire.read() << 8 | Wire.read();
  int16_t accZ = Wire.read() << 8 | Wire.read();

  Serial.print("ACC Z: ");
  Serial.println(accZ);
}

// --------- BATERIA ----------
float lerBateria() {
  int leitura = analogRead(PINO_BATERIA);
  float v = leitura * (3.3 / 4095.0);
  return v * 2.0;  // ajuste conforme divisor
}

// --------- SETUP ----------
void setup() {
  Serial.begin(115200);
  iniciarMotores();
  iniciarMPU();
}

// --------- TESTE DE VOO ----------
void loop() {

  Serial.print("Bateria: ");
  Serial.print(lerBateria());
  Serial.println("V");

  lerMPU();

  // ---- SUBIDA ----
  Serial.println("Subindo...");
  setMotores(PWM_TEST);
  delay(1500);

  // ---- PAIRANDO ----
  Serial.println("Hover...");
  setMotores(PWM_HOVER);
  delay(1500);

  // ---- DESCENDO ----
  Serial.println("Descendo...");
  setMotores(PWM_MIN);
  delay(2000);
}
