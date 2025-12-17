# <img src="https://github.com/user-attachments/assets/caabfdf0-0f9e-44a3-8200-c6579fe87887" alt="Ícone de descrição" width="28"> Descrição
O projeto tem como objetivo o desenvolvimento de um minidrone, abrangendo desde a elaboração do **circuito elétrico** e a confecção da **placa principal**, até a implementação do código em **C++** e a impressão e montagem do **chassi**.

# <img src="https://img.icons8.com/?size=100&id=6fwwyUCDlCBj&format=png&color=000000" alt="Ícone de componentes" width="28"> Componentes
- 1 x ESP32-S3
- 1 x Módulo GY-521 MPU-6050
- 4 x Transistor MOSFET SI2300 SOT-23 SMD
- 4 x Diodo 1N4148 SOD-323 SMD
- 4 x Capacitor 100nF 50V 0805 SMD 
- 6 x Resistor 10K 0805 SMD 912 (9.1 kOhms)
- 4 x Motor com hélice 
- 1 x Conector JST 2pinos curvo
- 1 x Bateria LiPO 3.7v 250mAh
- 1 x Pasta de solda 15g (138ºC)
- Percloreto de Ferro
- Placa de Fenolite

# <img src="https://img.icons8.com/?size=100&id=RdjjyEyZkl99&format=png&color=000000" alt="Ícone de placa" width="28"> Processo de Manufatura da Placa Principal
1) **Corte** um pedaço da dimensão deseada da placa de fenolite;
2) Passe **palha de aço** na placa para limpá-la;
3) Imprima o arquivo da [PCB](https://github.com/MatheusADC/Minidrone/blob/main/PCB.pdf);
4) **Cole** com fita crepe o lado da folha impressa em contato direto com o lado da placa limpo;
5) Despeje **acetona** na folha e a pressione na placa por volta de 10 minutos;
6) Retire **com cuidado** o papel em água corrente;
7) Cole com fita crepe um **barbante** na placa;
8) Mergulhe a placa por cerca de 15min no **percloreto de ferro**;

| Resultado |
| --------- |
| <img width="445" height="384" alt="image" src="https://github.com/user-attachments/assets/9edbebf9-3826-4194-82b6-4a2f0a2b5e01" /> |


> [!CAUTION]
> O percloreto de ferro é responsável por correr a porção de cobre da placa,
> logo não deixe muito tempo nessa solução.
> 
> Um indicador é o aparecimento de manchas da **cor rosa** na placa, informando o excesso
> de corrosão.

9) Utilize um **furador manual** de placas de fenolite para realizar os furos na placa.
