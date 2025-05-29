int pin8 = 8; // Pin diody LED
int pin9 = 9; // Pin buzzera
int sensor = A0; // Pin czujnika
int sensorValue = 0; // Zmienna do przechowywania odczytu z czujnika

void setup() {
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensor);
  Serial.println(sensorValue);

  if (sensorValue > 800) {
    digitalWrite(pin8, HIGH); // Włącz diodę LED
    digitalWrite(pin9, HIGH); // Włącz buzzer
  } else {
    digitalWrite(pin8, LOW); // Wyłącz diodę LED
    digitalWrite(pin9, LOW); // Wyłącz buzzer
  }
  delay(100);
}
