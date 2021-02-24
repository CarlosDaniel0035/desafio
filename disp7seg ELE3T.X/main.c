
#include <xc.h>
#include "config.h"
#include "delay.h"
#include "segmentos.h"


void main (void)
{
    int cont = 0;
    segmentos_init();
    while ( 1 )
    {
        segmentos (cont);
        delay (1000);
        
        if (++cont >= 16)
            cont = 0;
    }
}
