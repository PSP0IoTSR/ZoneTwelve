int signal = 0, sed = 1;

void setup(){
  pinMode(2, OUTPUT);
}

void loop(){
  signal+=sed;
  sed = signal>=255?-1:(signal<=0?1:sed);
  digitalWrite(2, signal);
  delay(100);
}