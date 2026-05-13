#include "ESC.h"

void inicializar() {
    esc.attach(3);
    esc.write(180);
    delay(100);
    esc.write(0);
    delay(100);
}

void mandar_velocidade(int speed, int maxPot) {
    if(speed > maxPot) speed = maxPot;
    speed = map(speed,0,1023,0,maxPot);
    esc.write(speed);
}