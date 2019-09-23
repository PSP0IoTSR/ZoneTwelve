boolean led = false;
void setup(){
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop(){
  digitalWrite(2, led^=true);
  digitalWrite(8, !led);
  delay(100);
}