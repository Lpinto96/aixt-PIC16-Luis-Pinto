// Project Name: Aixt project, https://gitlab.com/fermarsan/aixt-project.git
// File Name: pwm_test.c
// Author: Fernando Martínez Santa
// Date: 2023
// License: MIT
//
// Description: PWM emulation testing.
#include "../../api/time.c"
#include "../../api/machine/machine__pwm.c"

int main() {
    pwm2_duty(100);
    for(int i=0; i<=40; i+=5) {
        sleep(1);
        pwm1_duty(i);
        pwm2_duty(100-i);
    }
}