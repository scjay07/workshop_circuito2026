#ifndef ESC_H
#define ESC_H

#include <Arduino.h>
#include <Servo.h>

class ESC {
    private:
        Servo esc;  // objeto Servo como atributo

    public:
        ESC(int pin);
        void inicializar();
        void mandar_velocidade(int speed, int maxPot = 10);
};

#endif