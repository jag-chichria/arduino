/* 
 Blink
 */

int led = 9;
int brightness = 0;
int fadeAmount = 5;
//setup routine runs once when you press reset:
void setup(){
  pinMode(led, OUTPUT);  
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness + fadeAmount;
  if (brightness == 255 || brightness == 255)
  { 
    fadeAmount = -fadeAmount;
  } 
  delay(20);
}
