class trafficLight {
    public:
        int r;
        int g;
        int y;
        trafficLight(int red, int gr, int ye) { // Constructor with parameters
            r = red;
            g = gr;
            y = ye;
    };
    public:
        void setup(){

          pinMode(r, OUTPUT);
          pinMode(g, OUTPUT);
          pinMode(y, OUTPUT);
        };
    public:
        void loop(){
        digitalWrite(r, HIGH);
        delay(10000); // Wait for 10000 millisecond(s)
        digitalWrite(r, LOW);

        digitalWrite(g, HIGH);
        delay(5000); // Wait for 5000 millisecond(s)
        digitalWrite(g, LOW);

        digitalWrite(y, HIGH);
        delay(2000); // Wait for 2000 millisecond(s)
        digitalWrite(y, LOW);
        };
};

trafficLight traffic1(9, 7, 8);

const int r = 9;

void setup()
{

  Serial.begin(9600);
  traffic1.setup();
}

void loop()
{
      traffic1.loop();
}