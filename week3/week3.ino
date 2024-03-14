int IRPin =8;
int led=13;
int value;
void setup() {
  pinMode(IRPin,INPUT);
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}
void loop() {
 value = digitalRead(IRPin);
Serial.println(value);
  if(digitalRead(IRPin)==0)
  {
    digitalWrite(led,HIGH);
    Serial.println("Object Detected");
  }
  else
  {
    digitalWrite(led,HIGH);
    Serial.println("Object not Detected");
  }
}

