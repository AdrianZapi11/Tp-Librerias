#include <Arduino.h>

void setup() {
    RCC -> APB2ENR |= RCC_APB2ENR_IOPBEN;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE0_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE2_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE3_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE3_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE4_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE5_0;
    GPIOA -> CRL &= ~GPIO_CRL_CNF0 | GPIO_CRL_MODE6_0;
}
void dec7s(int num){
    switch(num){
    case 0:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BS7;//h
    break;
    case 1:
        GPIOA -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 2:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BR2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 3:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 4:
        GPIOA -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 5:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 6:
        GPIOA -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
    case 7:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
        case 8:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BS3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BS4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BS7;//h
    break;
        case 9:
        GPIOA -> BSRR |= GPIO_BSRR_BS0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BS1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BS2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BS5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BS6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BR7;//h
    break;
        default:
        GPIOA -> BSRR |= GPIO_BSRR_BR0;//a
        GPIOA -> BSRR |= GPIO_BSRR_BR1;//b
        GPIOA -> BSRR |= GPIO_BSRR_BR2;//c
        GPIOA -> BSRR |= GPIO_BSRR_BR3;//d
        GPIOA -> BSRR |= GPIO_BSRR_BR4;//e
        GPIOA -> BSRR |= GPIO_BSRR_BR5;//f
        GPIOA -> BSRR |= GPIO_BSRR_BR6;//g
        GPIOA -> BSRR |= GPIO_BSRR_BS7;//h
break;
}
}