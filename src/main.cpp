#include <Arduino.h>
#include "pindefs.h"
#include <Wire.h>

void setup() {
    pinMode(PWM_A_1, OUTPUT);
    pinMode(PWM_A_2, OUTPUT);
    pinMode(PWM_A_3, OUTPUT);
    pinMode(PWM_B_1, OUTPUT);
    pinMode(PWM_B_2, OUTPUT);
    pinMode(PWM_B_3, OUTPUT);
    pinMode(PWM_C_1, OUTPUT);
    pinMode(PWM_C_2, OUTPUT);
    pinMode(PWM_C_3, OUTPUT);

    pinMode(NSLEEP_1, OUTPUT);
    pinMode(NSLEEP_2, OUTPUT);
    pinMode(NSLEEP_3, OUTPUT);
    
    pinMode(NFAULT_1, INPUT);
    pinMode(NFAULT_2, INPUT);
    pinMode(NFAULT_3, INPUT);

    pinMode(DRVOFF, OUTPUT);

    Wire.begin();

}

void loop() {
    // put your main code here, to run repeatedly:
}
