void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0); // Ler o valor analógico do pino A0
  float peso = map(sensorValue, 0, 1023, 0, 100); // Mapear o valor do potenciômetro para uma faixa de peso

  Serial.print("Peso doado: ");
  Serial.print(peso);
  Serial.println(" kg");

  delay(1000);
}
