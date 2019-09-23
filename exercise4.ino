int leds[3] = {15, 16, 17};
int length = 3;
void setup(){
  for(int i=0;i<length;i++)
    pinMode(leds[i], OUTPUT);
}

void loop(){
  digitalWrite(leds[0], LOW);
  digitalWrite(leds[1], HIGH);
  digitalWrite(leds[2], HIGH);
  delay(1000);
  for(int i=0;i<length;i++)
    digitalWrite(leds[i], LOW);
  delay(100);
}
