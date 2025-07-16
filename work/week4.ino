void setup() {
  Serial.begin(9600);
 
}

void loop() {
  Serial.println("นาย ธนกร สังข์น้อย 664245004");
  Serial.println("-------- Start ----------");

  for (int i = 1; i <= 4; i++) {
    showTraffic(i);
    delay(3000); // ระยะเวลาไฟเขียว
  }
}

void showTraffic(int greenRoad) {
  for (int i = 1; i <= 4; i++) {
    Serial.print(i);
    Serial.print(" is ");
    if (i == greenRoad) {
      Serial.println("Green");
    } else {
      Serial.println("Red");
    }
  }
  Serial.println("----------------");
}
