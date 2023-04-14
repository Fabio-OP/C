#include "lib.h"

void scelta(FILE* file, Dipendenti dip[], int* n_dip, char scelt)
{
    switch (scelt)
    {
        case 'a':
        case 'A':  
            break;
        case 'p':
        case 'P':
            stampa(file, dip, *n_dip);
            puts("stampa");
            break;
        case 's':
        case 'S':
            break;
        case 'x':
        case 'X':
            puts("Uscita dal programma");
            exit(EXIT_SUCCESS);
            break;
        default:
            puts("Scelta non valida riprova!");
            break;
    }
}