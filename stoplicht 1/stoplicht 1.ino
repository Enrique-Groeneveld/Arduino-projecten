class Led {
  int ledPin;
  int ledState = LOW;

  public:
    Led(int pin, int state){
        ledPin = pin;
        pinMode(ledPin, OUTPUT);
        ledState = state;
    }  
    
    void toggleLight()
    {
      digitalWrite(this->ledPin, HIGH);
      delay()
    }
};

void setup() {
  Led rood(9, HIGH);
  delay(1000);
  rood.toggleLight();
  rood.toggleLight();
  Led groen(8, HIGH);
  delay(1000);
  groen.toggleLight();
  Led geel(7, HIGH);
  delay(1000);
  geel.toggleLight();
}

void loop(){

}