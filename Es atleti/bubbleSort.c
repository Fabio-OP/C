#include "lib.h"

void bubbleSort (int totalPosition[])
{
    int velocisti[ATLETI];
    int contV = 0;
    int mezzodondo[ATLETI];
    int contM = 0;
    int fondisti[ATLETI];
    int contF = 0;
    for (int i = 0; i < ATLETI -1; i++)
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
                    fondisti[contF] = i;
                    contF++;
                }
    }
    int k = 0;
    int i = 0;
    totalPosition[k] = velocisti[i];
    k++;
    for (; i < contV -1; i++)
    {
        //posizioni tot
        totalPosition[k] = velocisti[i];
        k++;
        for (int j = 0; j < TEMPI -1; j++)
        {
            if (atleti[velocisti[i+1]].tempo[j] < atleti[velocisti[i]].tempo[j])
            {
                //swap
                Atleti temp;
                temp = atleti[velocisti[i+1]];
                atleti[velocisti[i+1]] = atleti[velocisti[i]];
                atleti[velocisti[i]] = temp;
            }
        }
    }

    i = 0;
    totalPosition[k] = mezzodondo[i];
    k++;
    for (; i < contM -1; i++)
    {
        //posizioni tot
        totalPosition[k] = mezzodondo[i+1];
        k++;
        for (int j = 0; j < TEMPI -1; j++)
        {
            if (atleti[mezzodondo[i+1]].tempo[j] < atleti[mezzodondo[i]].tempo[j])
            {
                //swap
                Atleti temp;
                temp = atleti[mezzodondo[i+1]];
                atleti[mezzodondo[i+1]] = atleti[mezzodondo[i]];
                atleti[mezzodondo[i]] = temp;
            }
        }
    }

    i = 0;
    totalPosition[k] = fondisti[i];
    k++;
    for (; i < contF -1; i++)
    {
        //posizioni tot
        totalPosition[k] = fondisti[i+1];
        k++;
        for (int j = 0; j < TEMPI -1; j++)
        {
            if (atleti[fondisti[i+1]].tempo[j] < atleti[fondisti[i]].tempo[j])
            {
                //swap
                Atleti temp;
                temp = atleti[fondisti[i+1]];
                atleti[fondisti[i+1]] = atleti[fondisti[i]];
                atleti[fondisti[i]] = temp;
            }
        }
    }
}