#include "lib.h"

void personalBest ()
{
    float min;
    for (int i = 0; i < ATLETI; i++)
    {
        min = atleti[i].tempo[0];
        for (int j = 1; j < TEMPI; j++)
        {
            if (min > atleti[i].tempo[j])    min = atleti[i].tempo[j];
        }
        atleti[i].pb = min;
    }
}