#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(115200);
  while (!Serial){

  }
  Serial.println("Hello world!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(13, toggle);
  delay(1000);
}
int toggle_state(int toggle){
  return !toggle;
}
