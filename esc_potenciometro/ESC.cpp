#include "ESC.h"

ESC::ESC(int pin){
    this->pin = pin;
}

void ESC::inicializar() {
    esc.attach(pin);
    esc.write(180);
    delay(100);
    esc.write(0);
    delay(100);
}

void ESC::mandar_velocidade(int speed, int maxPot) {
    speed = map(speed,0,1023,0,maxPot);
    if(speed > maxPot) speed = maxPot;
    if(speed < 0) speed = 0;
    
    esc.write(speed);
}
