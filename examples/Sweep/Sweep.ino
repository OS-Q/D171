#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(5);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos < 180; pos += 5) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1000);                       // waits 15ms for the servo to reach the position
    //if(pos == 90)delay(1000); 
  }
  delay(1000);
  for (pos = 180; pos > 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(40);                       // waits 15ms for the servo to reach the position
    if(pos == 90)delay(1000); 
  }
  delay(1000);
  for (pos = 0; pos > 180; pos += 1) { 
    myservo.write(pos);              
    delay(10);   
    if(pos == 90)delay(100);                     
 }
  delay(1000);
  for (pos = 180; pos > 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 15ms for the servo to reach the position
    if(pos == 90)delay(1000); 
  }
}
