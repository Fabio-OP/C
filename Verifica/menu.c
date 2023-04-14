#include "lib.h"

char menu()
{
    puts("[A] Aggiungi dipendente\n"
         "[P] Stampa dipendenti con stipendio medio maggiore in ordine alfabetico\n"
         "[C] Cerca dipendente\n"
         "[S] Aumentare del 10 percento stipendio dipendenti anzianita maggiore di 5\n"
         "[X] Uscita dal programma");
    char scelta;
    scanf("%s", &scelta);
    return scelta;
}