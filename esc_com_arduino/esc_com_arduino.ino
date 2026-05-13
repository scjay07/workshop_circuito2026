#include "ESC.h" 

ESC esc(3);
int vel;

void setup() {
  Serial.begin(9600);
  esc.inicializar();
}

void loop() {
  if(Serial.available()>0){
    vel = Serial.parseInt();
  }
  esc.mandar_velocidade(vel);
}
