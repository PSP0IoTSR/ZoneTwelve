int btn = 2;
void setup(){
  pinMode(btn, INPUT);
}

void loop(){
  digitalWrite(LED_BUILTIN, digitalRead(btn));
  delay(100);
}

