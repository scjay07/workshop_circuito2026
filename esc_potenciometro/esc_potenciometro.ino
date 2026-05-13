#include <Servo.h>
Servo ESC;
int pot;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  ESC.attach(3);
  ESC.write(180);
  delay(100);
  ESC.write(0);
  delay(100);
  
}

void loop()
{

  pot = analogRead(A0);
  pot = map(pot,0,1023,0,10);
  ESC.write(pot);

}
