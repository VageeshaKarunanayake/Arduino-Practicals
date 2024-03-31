int buttonPin = 3;
int Led = 12;

void setup() {
pinMode(buttonPin,INPUT);
pinMode(Led,OUTPUT);
Serial.begin(9600);
}

void loop() {
int buttonState = digitalRead(buttonPin); //read the state of the button input
if (buttonState == LOW) { //pressing the button will produce a LOW state 0V
digitalWrite(Led,HIGH); //the led with turn on
Serial.println(buttonState);
} else{
digitalWrite(Led,LOW); //the led with turn off
} Serial.println(buttonState); //check in the serial monitor
}