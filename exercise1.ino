boolean led = false;
void setup(){
  pinMode(2, OUTPUT);
}

void loop(){
  digitalWrite(2, led^=true);
}