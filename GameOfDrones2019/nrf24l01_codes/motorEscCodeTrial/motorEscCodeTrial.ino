#include <Servo.h> 

Servo myservo;

void arm(){
 setSpeed(0); 
 delay(1000); //delay 1 seconds,  some speed controllers may need longer
}

void setSpeed(int speed){
 Serial.println(speed);
 int angle = map(speed, 0, 100,1000,2000);
 myservo.writeMicroseconds(angle);    
}

void setup()
{
 myservo.attach(9);
 arm();  
 Serial.begin(9600);
}

void loop()
{
 int speed;
 for(speed = 0; speed <= 80; speed += 5) {
   setSpeed(speed);
   delay(1000);
 }
 // sweep back down to 0 speed.
 for(speed = 80; speed > 0; speed -= 5) {
   setSpeed(speed);
   delay(1000);
 }
}

