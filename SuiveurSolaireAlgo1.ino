
#include <Servo.h>

int pos =0;
int positionInit = 0;
int positionFinal = 180;
Servo servo1;
Servo servo2;
const int sensor1=A0;
const int sensor2=A1;
void setup() {
   servo1.attach(9); 
   servo2.attach(10); 
   Serial.begin(9600);
 
}

void loop() {
  int val1 = analogRead(sensor1);
  int val2 = analogRead(sensor2);
  Serial.print(val1);
  Serial.print(" ");
  Serial.println(val2);
  
  while(val1 - val2 < 0 &&  )

  
}

void tournerServo1(int angle, int initPos){
  for(pos = initPos; pos < angle+initPos; pos += 10)    // goes from 180 degrees to 0 degrees
      {                               
        servo1.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
}

void tournerServo2(int angle, int initPos){
  for(pos = initPos; pos < angle+initPos; pos += 10)    // goes from 180 degrees to 0 degrees
      {                               
        servo2.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
}



