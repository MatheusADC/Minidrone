# <img src="https://github.com/user-attachments/assets/caabfdf0-0f9e-44a3-8200-c6579fe87887" alt="Ícone de descrição" width="28"> Descrição
O projeto tem como objetivo o desenvolvimento de um minidrone, abrangendo desde a elaboração do **circuito elétrico** e a confecção da **placa principal**, até a implementação do código em **C++** e a impressão e montagem do **chassi**.

<div align="center">

| Minidrone |
| --------- |
| <img width="759" height="409" alt="image" src="https://github.com/user-attachments/assets/2ae3a3e9-0fbe-44a4-bf8f-a7ee4d6c8133" /> |

</div>

# <img src="https://img.icons8.com/?size=100&id=6fwwyUCDlCBj&format=png&color=000000" alt="Ícone de componentes" width="28"> Componentes
- 1 x ESP32-S3
- 1 x Módulo GY-521 MPU-6050
- 4 x Transistor MOSFET SI2300 SOT-23 SMD
- 4 x Diodo 1N4148 SOD-323 SMD
- 4 x Capacitor 100nF 50V 0805 SMD 
- 6 x Resistor 0805 SMD 912 (9.1 kOhms)
- 4 x Motor com hélice 
- 1 x Conector JST 2pinos curvo
- 1 x Bateria LiPO 3.7v 250mAh
- 1 x Pasta de solda 15g (138ºC)
- Percloreto de Ferro
- Placa de Fenolite

# <sub><img src="https://img.icons8.com/?size=100&id=RdjjyEyZkl99&format=png&color=000000" alt="Ícone de placa" width="32"></sub> Processo de Manufatura da Placa Principal
1. **Corte** um pedaço de placa de fenolite nas dimensões desejadas.
2. Faça a limpeza da superfície utilizando **palha de aço**.
3. Imprima o arquivo da [PCB](https://github.com/MatheusADC/Minidrone/blob/main/PCB.pdf).
4. **Fixe** a folha impressa na placa com fita crepe, garantindo que o lado impresso fique em contato direto com a face limpa da placa.
5. Aplique **acetona** sobre o papel e pressione-o firmemente contra a placa por aproximadamente **10 minutos**.
6. Aguarde a acetona **evaporar**, isto é, a tinta da impressão do circuito no papel A4 ficar quase imperceptível.
7. Remova **cuidadosamente** o papel sob água corrente.
8. Faça a limpeza da superfície utilizando **palha de aço**.
9. Prenda um **barbante** na placa utilizando fita crepe, para facilitar o manuseio.
10. Mergulhe a placa em **percloreto férrico**, sem encostá-la no fundo do recipiente, por cerca de **10 a 15 minutos**.

<div align="center">

| Resultado |
| --------- |
| <img width="550" height="450" alt="Placa com as trilhas" src="https://github.com/user-attachments/assets/9edbebf9-3826-4194-82b6-4a2f0a2b5e01" /> |

</div>

> [!CAUTION]
> O percloreto de ferro é responsável por corroer a camada de cobre da placa.
> Portanto, evite deixá-la imersa por tempo excessivo.
>
> Um indicativo de **excesso de corrosão** é o surgimento de manchas de **coloração rosa** na superfície da placa.

9. Utilize um **furador manual para placas de fenolite** a fim de realizar os furos necessários para a passagem dos fios e do conector da bateria.

# <img src="https://img.icons8.com/?size=100&id=19937&format=png&color=000000" alt="Ícone de ferro de solda" width="28"> Microsoldagem
- Para soldar os componentes recomenda-se utilizar a **pasta de solda**.
- Para os **fios** e o **conector JST** recomenda-se usar o estanho em fio.
  
| Solda dos componentes | Solda dos fios |
| --------------------- | ---------------|
| <img width="554" height="414" alt="Solda dos componentes" src="https://github.com/user-attachments/assets/2ab4f90b-412c-43de-95ca-b9c2db0a44f6" /> | <img width="554" height="414" alt="Solda dos fios" src="https://github.com/user-attachments/assets/49e2af48-6783-4c04-bcac-5c605ae0e1cc" /> |

> [!TIP]
> Para faciliar a solda dos componentes eletroeletrônicos pode-se utilizar uma **mesa para solda**.

# <img src="https://img.icons8.com/?size=100&id=X6SIpL5zjQgw&format=png&color=000000" alt="Ícone de multímetro" width="32"> Testes do Circuito Elétrico

## Teste de Continuidade da Trilha

1. Ajuste o multímetro para o **modo diodo**.

<div align="center">

| Teste de Continuidade |
| --------------------- |
| <img width="420" height="640" alt="Teste de continuidade da trilha" src="https://github.com/user-attachments/assets/b47b1c5b-abab-450a-a00a-887826aed2cc" /> |

</div>

2. Ao posicionar as ponteiras do multímetro sobre um trecho **contínuo da trilha**, o equipamento emitirá um **sinal sonoro** característico, indicando condução elétrica.

3. Caso seja detectada continuidade elétrica entre trilhas que **não deveriam estar conectadas**, recomenda-se utilizar um **estilete** para realizar um pequeno corte na junção entre elas. Em seguida, repita o teste para confirmar a **descontinuidade** elétrica.

## Teste de Resistência Elétrica

1. Ajuste o multímetro para o **modo ohmímetro 20kΩ**.

<div align="center">

| Teste de Resistência |
| -------------------- | 
| <img width="337" height="606" alt="Teste de Resistência Elétrica" src="https://github.com/user-attachments/assets/4b93a065-7ab1-45da-b635-701bdf9c9a46" /> |

</div>

2. Ao posicionar as ponterias do multímetro nas extremidades de um resistor, o valor exibido no _display_ do multímetro deve ser próximo de **912**.

<!--# <sub><img src="https://img.icons8.com/?size=100&id=hJkVmtuljaPn&format=png&color=000000" alt="Ícone de circuito elétrico" width="38"></sub>Soldagem entre placas-->

# <sub><img src="https://img.icons8.com/?size=100&id=Of4lZV2lwBQI&format=png&color=000000" alt="Ícone do Arduino" width="34"></sub> Configurações do Arduino IDE 
1. Adicione o repositório oficial da Espressif em **File > Preferences > Additional boards manager URLs > OK**.
```
https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
```
| Adição da URL do Repositório |
| ---------------------------- |
| <img width="1920" height="907" alt="image" src="https://github.com/user-attachments/assets/3ea5b0b8-fc54-4516-ab2f-a984854b18a4" /> |

2. Instale o **Gerenciador de Placas** da família ESP32.
   
| Gerenciador de Placas ESP32 |
| --------------------------- |
| <img width="1919" height="913" alt="image" src="https://github.com/user-attachments/assets/bdec3265-93d0-4b8a-8056-fa05dd9a1553" /> |

3. Escolha o ESP32S3 como placa padrão em **Tools > Board > esp32 > ESP32S3 Dev Module**.

| Placa padrão |
| ------------ |
| <img width="1917" height="897" alt="image" src="https://github.com/user-attachments/assets/4857ac86-8e35-442b-8eaf-38fbd4818ada" /> |

4. Determine a porta de conexão do computador com a placa ESP32S3 pelo USB em **Tools > Port**.

| Determinação da porta |
| --------------------- |
| <img width="1919" height="914" alt="image" src="https://github.com/user-attachments/assets/02d451dd-37fe-4647-8607-e3092a35b0c3" /> |



# <sub><img src="https://img.icons8.com/?size=100&id=Nv6J9PwDcFPC&format=png&color=000000" alt="Ícone de Minidrone" width="38"></sub> Resultado

<div align="center">
  
| Vista Superior | Vista Inferior |
| -------------- | -------------- |
| <img width="400" height="300" alt="Vista Superior" src="https://github.com/user-attachments/assets/7cc02762-5f23-4d72-beb8-dc56e27d7383" /> | <img width="400" height="300" alt="Vista Inferior" src="https://github.com/user-attachments/assets/6d40bc5c-28f5-461e-98d0-7942b0a8e9ee" /> |

| Vista Isométrica | Porção Interna |
| --------------- | -------------- |
| <img width="400" height="300" alt="Vista Isométrica" src="https://github.com/user-attachments/assets/e2b1066f-6a23-4b2c-8c51-f87b16b32a70" /> | <img width="400" height="300" alt="Porção Interna" src="https://github.com/user-attachments/assets/047b45eb-fa33-47fc-8e94-1a6cfec40667" /> |

</div>
