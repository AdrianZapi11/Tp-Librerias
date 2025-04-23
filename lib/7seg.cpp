#include <Arduino.h>

void setup() {
    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE0_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE2_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE3_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE3_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE4_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE5_0;
    GPIOB -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE6_0;
}
void dec7s(int num){
    switch(num){
    case 0:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BS7;//h
    break;
    case 1:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 2:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BR2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 3:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 4:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 5:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 6:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 7:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
        case 8:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BS7;//h
    break;
        case 9:
        GPIOB -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BR7;//h
    break;
        default:
        GPIOB -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOB -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOB -> BSRR |= GPIO_BSRR_BR2;//c
        GPIOB -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOB -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOB -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOB -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOB -> BSRR |= GPIO_BSRR_BS7;//h
break;
}
}