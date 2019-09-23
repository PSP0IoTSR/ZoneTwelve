boolean led = false;
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop(){
  digitalWrite(2, led^=true);
  digitalWrite(3, !led);
}