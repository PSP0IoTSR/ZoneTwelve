int signal = 0;
void setup(){
  pinMode(2, OUTPUT);
}

void loop(){
  signal = (signal+64)%256;
  analogWrite(2, signal);
  delay(100);
}