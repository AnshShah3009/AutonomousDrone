#include <Servo.h> 

Servo myservo;
int pot=A0;
int spd;
void arm(){
 setSpeed(0); 
 delay(1000); //delay 1 seconds,  some speed controllers may need longer
}

void setSpeed(int speed){
 //Serial.println(speed);
 int angle = map(speed, 0, 1023,1000,2000);
 myservo.writeMicroseconds(angle);  
 Serial.println(angle);  
}

void setup()
{
  
 pinMode(pot,INPUT);
 myservo.attach(9);
 arm();  
 Serial.begin(9600);
}

void loop()
{
spd=analogRead(pot);
setSpeed(spd);

}

// go till 1800 only if using scale of 1000 to 2000

