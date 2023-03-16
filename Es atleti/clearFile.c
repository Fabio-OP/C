#include "lib.h"

void clearFile ()
{
    FILE* fptr;
    fptr = fopen ("test.txt", "w");
    if (!fptr)
    {
        puts ("Erorr! File non trovato");
        exit (EXIT_FAILURE);
    }
    fclose (fptr);
}