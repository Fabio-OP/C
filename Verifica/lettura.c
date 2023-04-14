#include "lib.h"

void lettura(FILE* file, Dipendenti dip[], int* n_dip)
{
    file = fopen("dipendenti.txt", "r");
    if (!file){
        puts("File non trovato!");
        exit(EXIT_FAILURE);
    }
    int i = 0;
    while (fscanf(file, "%*[^:]: %s\n"
                        "%*[^:]: %s\n"
                        "%*[^:]: %d\n"
                        "%*[^:]: %d\n",
                    dip[i].nome,
                    dip[i].cognome,
                    &dip[i].anzianita,
                    &dip[i].stipendio) == 4);
    {
        i++;
    }
    fclose(file);
    *n_dip = i;
}