/* Biblioteca */
#include <SoftwareSerial.h> /* Comandos Seriais */

SoftwareSerial HC05(10, 11); /* TX-RX */


/* Variáveis Lógicas ON-OFF */
int state = 0;  /*Controla o status do LED Vermelho */
int state2 = 0; /*Controla o status do LED Amarelo */
int state3 = 0; /* Controla o status do LED Verde */

/* Define a pinagem do LED */
#define vermelho 4
#define amarelo 3
#define verde 2

void setup()
{
  Serial.begin(9600);        /* Taxa de transmissão na serial */
  HC05.begin(9600);        /* Taxa de transmissão do Módulo */

  pinMode(verde, OUTPUT);      /* Declara verde como OUTPUT */
  pinMode(amarelo, OUTPUT);         /* Declara amarelo como OUTPUT */
  pinMode(vermelho, OUTPUT); /* Declara vermelho como OUTPUT */

}
void loop()
{
  /* Armazena os valores de leitura de HC05 na variável readBluetooth */
  int readBluetooth = HC05.read();

  switch (readBluetooth)
  { /* De acordo com o valor armazenado em readBluetooth */
    case 'a': /* Caso receba o caractere 'a'*/
      state = !state; /* substitui o valor de state entre 0 e 1 */
      digitalWrite(vermelho, state); /* state aciona ou desliga o LED */
      break; /* Fim do caso 'a' */

    case 'b': /* Caso receba o caractere 'b' */
      state2 = !state2; /* substitui o valor de state entre 0 e 1 */
      digitalWrite(amarelo, state2);/* state aciona ou desliga o LED */
      break; /* Fim do caso 'b'*/

    case 'c': /* Caso receba o caractere 'c' */
      state3 = !state3;/* substitui o valor de state entre 0 e 1 */
      digitalWrite(verde, state3);/* state aciona ou desliga o LED */
      break; /* Fim do caso 'c' */
  }
}