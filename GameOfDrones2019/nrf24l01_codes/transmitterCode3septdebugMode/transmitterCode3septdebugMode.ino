#include  <SPI.h>
#include <nRF24L01.h>
#include "RF24.h"
bool truth=1;
char msg[1];
RF24 radio(7,8);
int i=0;
byte addresses[][6] = {"1Node","2Node"};
bool radioNumber=0;
void setup(void){
  Serial.begin(9600);
   radio.begin();
   
    if(radioNumber){
    radio.openWritingPipe(addresses[1]);
    radio.openReadingPipe(1,addresses[0]);
  }else{
    radio.openWritingPipe(addresses[0]);
    radio.openReadingPipe(1,addresses[1]);
  }
 Serial.begin(9600);

}
 void loop(void){
  Serial.println("OUTPUT is");
   Serial.println(radio.isPVariant());
   delay(2000);
 if (1){
 msg[0] = 65+i;
 i++;
 //Serial.println("Transmitting");
 //if(!radio.write(msg, 1))
    //Serial.println("Failed");
  //else
  //Serial.println("Transmission was successfull");
 //Serial.print(msg[0]);}
 delay(50);
 } }

