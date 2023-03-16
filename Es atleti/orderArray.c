#include "lib.h"

void orderArray (int totalPosition[])
{
    Atleti swap[ATLETI];
    for (int i = 0; i < ATLETI; i++)
    {
        swap[i] = atleti[totalPosition[i]];
    }
    for (int i = 0; i < ATLETI; i++)
    {
        atleti[totalPosition[i]] = swap[i];
    }
}