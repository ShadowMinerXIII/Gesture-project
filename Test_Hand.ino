#include <FingerLib.h>

Finger Pinky;
Finger Ring;
Finger Middle;
Finger Index;
Finger Thumb;
byte serialData;

void setup() 
{
  Serial.begin(9600); 
  Index.attach(3,6,A1);//OK
  Thumb.attach(13,4,A5);//OK
  Middle.attach(7,8,A2);//OK
  Ring.attach(10,9,A3);//Ok
  Pinky.attach(11,12,A4);//OK
} 

void loop() 
{
  while(!Serial.available()){
    Serial.println("Not Ready");
  }
  while(Serial.available()>0)
  {
    Serial.println("Ready");
    serialData = Serial.read();
    Serial.print(serialData);
    if(serialData == 'D'){
        Fist();
    }
  }  
}
void Fist() {
          Pinky.close();
          Ring.close();
          Middle.close();
          Index.close();
          Thumb.close();
} 
