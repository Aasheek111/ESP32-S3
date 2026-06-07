#define SOIL_PIN 4   // we can use other anolog pins also

//4095 is the higest 
void setup() {
  Serial.begin(115200);
  delay(1000);
}

//some checks
//connect the probe and control module
//analog pin ma connect hunu parxa module bata esp ma connect garni bela ma 

void loop() {
  int sensorValue = analogRead(SOIL_PIN);
  Serial.print("Raw Value: ");
  Serial.println(sensorValue);
  delay(500);

}