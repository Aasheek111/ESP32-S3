#define WATER_SENSOR_PIN 5
#define BUZZER_PIN 8

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop() {
  int waterValue = analogRead(WATER_SENSOR_PIN);

  Serial.print("Water Value: ");
  Serial.println(waterValue);

//test garera change garey ni hunxa 500 
  if (waterValue < 500) {
    digitalWrite(BUZZER_PIN, HIGH); 
  } else {
    digitalWrite(BUZZER_PIN, LOW);  
  }

  delay(500);
}