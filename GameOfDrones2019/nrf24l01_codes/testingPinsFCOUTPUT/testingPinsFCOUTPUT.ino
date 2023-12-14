#include<Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  myservo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.writeMicroseconds(1250);
  delay(500); 
}
