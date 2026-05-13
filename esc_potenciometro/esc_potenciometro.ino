#include "ESC.h" 

ESC esc(3);

void setup() {
  esc.inicializar();
}

void loop() {
  int vel = analogRead(A0); 
  esc.mandar_velocidade(vel);
}
