# <img src="https://github.com/user-attachments/assets/caabfdf0-0f9e-44a3-8200-c6579fe87887" alt="Ícone de descrição" width="28"> Descrição
O projeto tem como objetivo o desenvolvimento de um minidrone, abrangendo desde a elaboração do **circuito elétrico** e a confecção da **placa principal**, até a implementação do código em **C++** e a impressão e montagem do **chassi**.

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

# <img src="https://img.icons8.com/?size=100&id=RdjjyEyZkl99&format=png&color=000000" alt="Ícone de placa" width="28"> Processo de Manufatura da Placa Principal
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
