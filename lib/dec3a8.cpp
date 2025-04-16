#include "dec3a8.h"

int valor;
void dec3a8_init() {
    RCC->APB2ENR |= RCC_APB2ENR_IOPBEN;
    RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;

    GPIOB->CRL |= 0x11111111; // Configuración de pines como salida
}

void dec3a8(int I0, int I1, int I2) {
    valor = (I0) | (I1 << 1) | (I2 << 2); 

    GPIOB->BRR = 0xFF; // esto para aoagar todas las salidas antes de activar la correcta

    switch (valor) {
    case 0b000:
        GPIOB->BSRR |= (1 << 0);
        break;
    case 0b001:
        GPIOB->BSRR |= (1 << 1);
        break;
    case 0b010:
        GPIOB->BSRR |= (1 << 2);
        break;
    case 0b011:
        GPIOB->BSRR |= (1 << 3);
        break;
    case 0b100:
        GPIOB->BSRR |= (1 << 4);
        break;
    case 0b101:
        GPIOB->BSRR |= (1 << 5);
        break;
    case 0b110:
        GPIOB->BSRR |= (1 << 6);
        break;
    case 0b111:
        GPIOB->BSRR |= (1 << 7);
        break;
    default:
        GPIOB->BRR = 0xFF; // esto para apagar todas las salidas en caso de error
        break;
    }
}