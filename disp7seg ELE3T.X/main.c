
#include <xc.h>
#include "config.h"
#include "delay.h"
#include "segmentos.h"


void main (void)
{
    int estado = 0;
    int t;
        switch ( estado )
        {
            case 0:
                   
                        estado = 1;
                        break;
            case 1:
                   if(s1() == 1) 
                        estado = 2;
                   
                   if (s0() ==1)
                        estado = 3;
                        break;
            case 2:
                   if (cont < 0 )
                        ++cont;
                   else
                       cont = 0;
                        estado = 4;
                        break;
            case 3: 
                   if (cont >= 9)
                        --cont;
                   else
                       cont = 9;
                        estado = 4;
                        break;
                        
            case 4:   
                
                if (s1() == 0 && s0() ==0)
                    estado =0;
                        break;
        }                
    
}