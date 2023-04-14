#include "lib.h"

void azioni()
{
    BOOL controllo = 0;
    printf("Benvenuto nel sito %s", NOMESITO);
    printf("Scegli un azione\nRegistrati(0) \tAccedi(1): ");
    do
    {
        scanf("%d", (int*)&sito.azione);
        if (sito.azione == 0 || sito.azione == 1)
        {
            controllo = 1;
        }else   puts("Errore! Input ERRATO riptova\n");
    } while (!controllo);
    if (sito.azione == 0)
    {
        //registrati();
    }else   accesso();
}