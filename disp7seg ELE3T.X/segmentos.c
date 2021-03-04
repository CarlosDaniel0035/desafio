
#include <xc.h>
#include "config.h"


char vetor [16] = 
{
 0x06, 0x5B, 0x4F, 
 0x66, 0x6D, 0x7D, 0x07,
 0x79, 0x7F,};

void segmentos_init (void)
{
    TRISB = 0;
    PORTB = 0;
}

void segmentos (int c)
{
    PORTB = vetor [ c ];
}

