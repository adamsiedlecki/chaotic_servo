#include <Servo.h>

// just a chaotic servo 4fun
 
Servo servo;
int position = 0; 
int change_degrees = 20;
 
void setup() 
{ 
  Serial.begin(9600);
  servo.attach(3); 
  
} 
 
void loop() 
{  
  servo.write(0);
  delay(getRandomDelay());
  servo.write(random(180));
  servo.write(180);    
  delay(getRandomDelay());           
}

int getRandomDelay(){
  
  return random(2500);  
}
