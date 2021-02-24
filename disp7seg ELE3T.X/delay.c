#include <xc.h>
#include "delay.h"
#include "config.h"

void delay(unsigned int t )

{
    while ( 1 )
    {
        __delay_ms(1);
        --t;
    }
}

