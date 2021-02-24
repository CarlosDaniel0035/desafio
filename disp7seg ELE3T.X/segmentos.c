
#include <xc.h>


void segmentos_init (void)
{
    TRISD = 0;
    PORTD = 0;
}

void segmentos (int c)
{
    PORTD = c;
}
