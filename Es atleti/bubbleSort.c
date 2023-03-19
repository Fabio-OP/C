#include "lib.h"

void bubbleSort ()
{
    int v = 0, m = 0, f = 0;
    for (int i = 0; i < ATLETI - 1; i++)
    {
        if (atleti[i].Spec == 1)
        {
            v++;
        }else if (atleti[i].Spec == 2)
            {
                m++;
            }else   f++;   
    }
    for (int i = v-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (atleti[j].pb > atleti[j+1].pb)
            {
                Atleti temp;
                temp = atleti[j+1];
                atleti[j+1] = atleti[j];
                atleti[j] = temp;
            }
        }
    }
    for (int i = m-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (atleti[j+v].pb > atleti[j+v+1].pb)
            {
                Atleti temp;
                temp = atleti[j+v+1];
                atleti[j+v+1] = atleti[j+v];
                atleti[j+v] = temp;
            }
        }
    }
    for (int i = f-1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (atleti[j+v+m].pb > atleti[j+v+m+1].pb)
            {
                Atleti temp;
                temp = atleti[j+v+m+1];
                atleti[j+v+m+1] = atleti[j+v+m];
                atleti[j+v+m] = temp;
            }
        }
    }
    batterie(v, m, f);
}