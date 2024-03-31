const int ledPin = 9; 

void setup() {
  pinMode(ledPin, OUTPUT);
}


void loop() {
   for (int brightness = 0; brightness < 255; brightness+= 10) {
        analogWrite(ledPin, brightness);
        delay(50);
    }

     for (int brightness = 255; brightness > 0; brightness -= 10) {
        analogWrite(ledPin, brightness);
        delay(50);
    }
}