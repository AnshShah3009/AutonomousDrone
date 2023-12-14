#include<SPI.h>
#include "RF24.h"
#include <nRF24L01.h>


struct data{
  float pitch;
  float roll;
  float yaw;
}myData;

byte msg;

RF24 radio(9,10);
byte addresses[][6]={"1Node","2Node"};
bool radionumber=1;

void setup() {
 Serial.begin(9600);
 radio.begin();
 msg=111;
 if(radionumber)
 {
  radio.openWritingPipe(addresses[1]);
  radio.openReadingPipe(1,addresses[0]);
 }
 else
 {
  radio.openWritingPipe(addresses[0]);
  radio.openReadingPipe(1,addresses[1]);
 }
 
 myData.pitch=1.54;
 myData.yaw=0.69;
 myData.roll=1.69;
 //radio.setPayloadSize(32); 
 radio.enableDynamicPayloads();
 radio.startListening();
}


void loop() {
  radio.stopListening();
  Serial.println("Transmiting");
   
   if(!radio.write(&myData.pitch,sizeof(myData.pitch)))
     Serial.println("FAIL");
  
  radio.startListening();
  delay(100);
}
