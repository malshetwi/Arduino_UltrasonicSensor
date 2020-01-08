#include <NewPing.h>                                                                 //UltraSonic library.



int trig = D6 ;                                                                     // Variable for U_Sonic.
int echo = D5 ;                                                                     // Variable for U_Sonic.
int max_dis = 200 ;                                                                 // Variable for U_Sonic.
NewPing sonic (trig , echo , max_dis);                                              // Variables in library(parameters) .




void setup() { //  code here, to run once: 
                   
Serial.begin(9600);                                                                 // Debug console

  

}


void loop() {  // code here, to run repeatedly:



  int us = sonic.ping();                                                            // Variable in library to mathematical calculate.
  int dis = us / US_ROUNDTRIP_CM ;                                                  // compelete equation of calculate bring (CM).
   
  Serial.print("Water Level:");                                                     // printing Text.
  Serial.println(dis);                                                              // printing int. Variable.
  delay(200);                                                                       // delay time.
  



}
