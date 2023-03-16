#include "lib.h"

void personalBest ()
{
    for (int i = 0; i < ATLETI; i++)
    {
        int min = 0;
        for (int j = 0; j < TEMPI -1; j++)
        {
            if (atleti[i].tempo[j] < atleti[i].tempo[j])    min = atleti[i].tempo[j];
        }
        atleti[i].pb = min;
    }
    
}