#define LED_BUILTIN 2

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  digitalWrite(LED_BUILTIN, HIGH);
  Serial.print("Light...\n");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.print("Not LIGHT...\n");
  delay(1000);

}
