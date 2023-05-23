// Definindo os pinos dos semáforos para carros
const int carRed = 10;
const int carYellow = 11;
const int carGreen = 12;

// Definindo os pinos dos semáforos para pedestres
const int pedestrianGreen = 9;
const int pedestrianRed = 8;

void setup() {
  // Configurando os pinos como saída
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedestrianRed, OUTPUT);
  pinMode(pedestrianGreen, OUTPUT);
}

void loop() {
  // Semáforo para carros
  digitalWrite(carGreen, HIGH);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, LOW);

  // Semáforo para pedestres
   digitalWrite(pedestrianRed, HIGH);
  digitalWrite(pedestrianGreen, LOW);

  // Aguardando 5 segundos
  delay(5000);

  // Semáforo para carros
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);

  // Semáforo para pedestres
  digitalWrite(pedestrianGreen, HIGH);
  digitalWrite(pedestrianRed, LOW);

  // Aguardando 5 segundos
  delay(5000);
  
  // Reiniciando o ciclo
}