#define BUZZER_PIN 5

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
}

//yesma chai buzzer ko + lai pin 5 ma connect gara
//ani gnd lai gnd ma 
//halka lamo chai + ho haii
//halka sano chai - ho i.e gnd

void loop() {
  digitalWrite(BUZZER_PIN, HIGH); // buzzer on
  delay(1000);

  digitalWrite(BUZZER_PIN, LOW);  // buzzer off
  delay(1000);
}