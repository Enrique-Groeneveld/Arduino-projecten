// C++ code
//
/*
  Fade
  This example shows how to fade an LED on pin 9
  using the analogWrite() function.

  The analogWrite() function uses PWM, so if  you
  want to change the pin you're using, be  sure to
  use another PWM capable pin. On most  Arduino,
  the PWM pins are identified with   a "~" sign,
  like ~3, ~5, ~6, ~9, ~10 and ~11.
*/ca


const int rood = 9;
const int geel = 8;
const int groen = 7;
void setup()
{
  pinMode(rood, OUTPUT);
  pinMode(geel, OUTPUT);
  pinMode(groen, OUTPUT);
}

void loop()
{
 digitalWrite(rood,digitalRead(rood)^1);
 delay(10000);
 digitalWrite(rood,digitalRead(rood)^1);
 digitalWrite(groen,digitalRead(groen)^1);
 delay(5000);
 digitalWrite(groen,digitalRead(groen)^1);
 digitalWrite(geel,digitalRead(geel)^1);
 delay(2000);
 digitalWrite(geel,digitalRead(geel)^1);
 
}