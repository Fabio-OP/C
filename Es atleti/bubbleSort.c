#include "lib.h"

void bubbleSort (int totalPosition[])
{
    int velocisti[ATLETI];
    int contV = 0;
    int mezzodondo[ATLETI];
    int contM = 0;
    int fondisti[ATLETI];
    int contF = 0;
    for (int i = 0; i < ATLETI; i++)
    {
        if (atleti[i].Spec == 1)
        {
            velocisti[contV] = i;
            contV++;
        }else if (atleti[i].Spec == 2)
            {
                mezzodondo[contM] = i;
                contM++;
            }else if (atleti[i].Spec == 3)
                {
                    fondisti[contM] = i;
                    contF++;
                }
    }
}