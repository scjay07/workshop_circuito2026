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

void loop() {
  if(Serial.available()){
    pot = Serial.parseInt();
    if(pot!=0) Serial.println(pot);
  }
  // put your main code here, to run repeatedly:
ESC.write(pot);

}
