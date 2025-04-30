#include <Arduino.h>
#include "seg7prof.h"

int contador = 0;
bool subiendo = true;
bool botonPresionadoAnterior = false;

void seg7prof_init() {
    RCC -> APB2ENR |= RCC_APB2ENR_IOPAEN;

    // Pines PA0 a PA6 como salida push-pull
    GPIOA -> CRL &=~ GPIO_CRL_CNF0 &~ GPIO_CRL_MODE0_0;
    GPIOA -> CRL |= GPIO_CRL_MODE0_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF1 &~ GPIO_CRL_MODE1_0;
    GPIOA -> CRL |= GPIO_CRL_MODE1_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF2 &~ GPIO_CRL_MODE2_0;
    GPIOA -> CRL |= GPIO_CRL_MODE2_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF3 &~ GPIO_CRL_MODE3_0;
    GPIOA -> CRL |= GPIO_CRL_MODE3_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF4 &~ GPIO_CRL_MODE4_0;
    GPIOA -> CRL |= GPIO_CRL_MODE4_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF5 &~ GPIO_CRL_MODE5_0;
    GPIOA -> CRL |= GPIO_CRL_MODE5_0;
    GPIOA -> CRL &=~ GPIO_CRL_CNF6 &~ GPIO_CRL_MODE6_0;
    GPIOA -> CRL |= GPIO_CRL_MODE6_0;

    // Pin PA7 como entrada con pull-up interno
    GPIOA -> CRL &=~ GPIO_CRL_MODE7;
    GPIOA -> CRL &=~ GPIO_CRL_CNF7;
    GPIOA -> CRL |= GPIO_CRL_CNF7_1;
    GPIOA -> ODR |= GPIO_ODR_ODR7;
}

void seg7prof(int num) {
    bool botonPresionado = !(GPIOA->IDR & GPIO_IDR_IDR7);

    if (botonPresionado && !botonPresionadoAnterior) {
        if (subiendo) {
            contador++;
            if (contador >= 9) {
                contador = 9;
                subiendo = false;
            }
        } else {
            contador--;
            if (contador <= 0) {
                contador = 0;
                subiendo = true;
            }
        }
    }

    botonPresionadoAnterior = botonPresionado;

    // Apaga todos los segmentos de forma básica (bit por bit)
    GPIOA->BSRR |= GPIO_BSRR_BR0;
    GPIOA->BSRR |= GPIO_BSRR_BR1;
    GPIOA->BSRR |= GPIO_BSRR_BR2;
    GPIOA->BSRR |= GPIO_BSRR_BR3;
    GPIOA->BSRR |= GPIO_BSRR_BR4;
    GPIOA->BSRR |= GPIO_BSRR_BR5;
    GPIOA->BSRR |= GPIO_BSRR_BR6;

    // Enciende los segmentos según el número
    switch(contador){
        case 0:
            GPIOA->BSRR |= GPIO_BSRR_BS0; //a
            GPIOA->BSRR |= GPIO_BSRR_BS1; //b
            GPIOA->BSRR |= GPIO_BSRR_BS2; //c
            GPIOA->BSRR |= GPIO_BSRR_BS3; //d
            GPIOA->BSRR |= GPIO_BSRR_BS4; //e
            GPIOA->BSRR |= GPIO_BSRR_BS5; //f
            GPIOA->BSRR |= GPIO_BSRR_BR6; //g
        break;
        case 1:
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BR2; 
            GPIOA->BSRR |= GPIO_BSRR_BR3; 
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BR5; 
            GPIOA->BSRR |= GPIO_BSRR_BR6; 
        break;
        case 2:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BR2; 
            GPIOA->BSRR |= GPIO_BSRR_BS3;
            GPIOA->BSRR |= GPIO_BSRR_BS4;
            GPIOA->BSRR |= GPIO_BSRR_BR5; 
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 3:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BS3;
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BR5; 
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 4:
            GPIOA->BSRR |= GPIO_BSRR_BR0; 
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BR3; 
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BS5;
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 5:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BR1; 
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BS3;
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BS5;
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 6:
            GPIOA->BSRR |= GPIO_BSRR_BR0; 
            GPIOA->BSRR |= GPIO_BSRR_BR1; 
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BS3;
            GPIOA->BSRR |= GPIO_BSRR_BS4;
            GPIOA->BSRR |= GPIO_BSRR_BS5;
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 7:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BR3; 
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BR5; 
            GPIOA->BSRR |= GPIO_BSRR_BR6; 
        break;
        case 8:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BS3;
            GPIOA->BSRR |= GPIO_BSRR_BS4;
            GPIOA->BSRR |= GPIO_BSRR_BS5;
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
        case 9:
            GPIOA->BSRR |= GPIO_BSRR_BS0;
            GPIOA->BSRR |= GPIO_BSRR_BS1;
            GPIOA->BSRR |= GPIO_BSRR_BS2;
            GPIOA->BSRR |= GPIO_BSRR_BR3;
            GPIOA->BSRR |= GPIO_BSRR_BR4; 
            GPIOA->BSRR |= GPIO_BSRR_BS5;
            GPIOA->BSRR |= GPIO_BSRR_BS6;
        break;
    }
}