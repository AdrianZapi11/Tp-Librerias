#include <Arduino.h>
#include "seg7prof.h"

int main(void) {
    seg7prof_init();  

    while (1) {
        for (int i = 0; i <= 9; i++) {
            seg7prof(i);  
            delay(500);   
        }
    }
}