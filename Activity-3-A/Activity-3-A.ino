int pushButton = 2;
int count = 0;

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
    if(digitalRead(btnPin)==HIGH)
    {
      count = count + 1;
      Serial.println(count);
      delay(300);
    }
}