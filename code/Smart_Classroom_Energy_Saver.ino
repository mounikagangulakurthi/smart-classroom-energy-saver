#define LDR_PIN 34
#define PIR_PIN 27
#define LED_PIN 5

void setup() {

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  int lightValue = analogRead(LDR_PIN);

  int motion = digitalRead(PIR_PIN);

  Serial.print("Light: ");
  Serial.print(lightValue);

  Serial.print(" Motion: ");
  Serial.println(motion);

  if(lightValue < 2000 && motion == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON");
  }
  else
  {
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF");
  }

  delay(500);
}
