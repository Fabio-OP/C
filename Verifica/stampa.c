#include "lib.h"
#include <string.h>
void stampa(FILE* file, Dipendenti dip[], int n_dip)
{
    for (int i = n_dip -1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (strcmp (dip[j].cognome, dip[j+1].cognome) < 0)
            {
                Dipendenti temp;
                temp = dip[j];
                dip[j] = dip[j+1];
                dip[j+1] = temp;
            }else if (strcmp (dip[j].cognome, dip[j+1].cognome) == 0)
            {
                if (strcmp (dip[j].nome, dip[j+1].nome) < 0)
                {
                    Dipendenti temp;
                    temp = dip[j];
                    dip[j] = dip[j+1];
                    dip[j+1] = temp;
                }
            }
        }
    }
    float media = 0;
    for (int i = 0; i < n_dip; i++)
    {
        media += (float)dip[i].stipendio;
    }
    media = media/(float)n_dip;
    for (int i = 0; i < n_dip; i++)
    {
            printf("Nome: %s\n"
                "Cognome: %s\n"
                "Anzianita': %d\n"
                "Stipendio: %d\n"
                "--------------",
                dip[i].nome,
                dip[i].cognome,
                dip[i].anzianita,
                dip[i].stipendio);
    }
}