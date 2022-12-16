class Led {
  int ledPin;
  int ledState;

  public:
    Led(int pin, int state){
        ledPin = pin;
        pinMode(ledPin, OUTPUT);
        ledState = state;
    }  
    
    void toggleLight(int duration)
    {
      digitalWrite(this->ledPin, digitalRead(this->ledPin)^1);
      delay(duration);
      digitalWrite(this->ledPin, digitalRead(this->ledPin)^1);
   }
};
  Led rood(9, LOW);
  Led groen(8, LOW);
  Led geel(7, LOW);
  
void setup() {

}

void loop(){
  rood.toggleLight(10000);
  groen.toggleLight(5000);
  geel.toggleLight(2000);
}

