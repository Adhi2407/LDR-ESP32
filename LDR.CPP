#define LED_PIN 23
#define LDR_PIN 18
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(LED_PIN, OUTPUT);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  int ldr_value = digitalRead(LDR_PIN);
  Serial.println(ldr_value);

  if(ldr_value == 1) {
    digitalWrite(LED_PIN,HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
  //digitalWrite(LED_PIN, HIGH);
  // put your main code here, to run repeatedly:
 // delay(100); // this speeds up the simulation
  //digitalWrite(LED_PIN,LOW);
 // delay(1000);
}
