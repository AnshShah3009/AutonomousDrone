//Code for Receiver
#include <SPI.h>
#include "RF24.h"
#include <nRF24L01.h>
struct data{
  float pitch;
  float roll;
  float yaw;
}myData;
RF24 radio(10,9);
const uint64_t pipe = 0xE8E8F0F0E1LL;
byte addresses[][6] = {"1Node","2Node"};
bool radioNumber=1;
void setup(void){
  /////
  ////
 Serial.begin(9600);
 radio.begin();
 if(radioNumber){
    radio.openWritingPipe(addresses[1]);
    radio.openReadingPipe(1,addresses[0]);
  }
  else{
    radio.openWritingPipe(addresses[0]);
    radio.openReadingPipe(1,addresses[1]);
  }
 //radio.openReadingPipe(1,pipe);
 radio.enableDynamicPayloads();
 radio.startListening();
}
 void loop(){
 if (radio.available()){
     radio.read(&myData,sizeof(myData));
     Serial.print("Pitch:");      
     Serial.println(myData.pitch);
     Serial.print("Yaw:");
     Serial.println(myData.yaw);
     Serial.print("Roll:");
     Serial.println(myData.roll);
     }
 else{Serial.println("No radio available");}
 }
 

