#include "lib.h"

void printFile(int ordinati[])
{
    FILE* pf;
    pf=fopen("test.txt", "a");
    if(!pf)
    {
        printf("File non trovato");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < 10; i++){
        fprintf(pf, "nome cognome\n");
        fprintf(pf, "%s %s\n", atleti[ordinati[i]].anagrafica.nome, atleti[ordinati[i]].anagrafica.cognome);
        fprintf(pf, "anno di nascita: %d\n", atleti[ordinati[i]].anagrafica.annoNascita);
        fprintf(pf, "specialita: ");
        switch (atleti[ordinati[i]].Spec)
        {
        case 1:
            fprintf(pf, "VELOCISTA\n");
            break;
        case 2:
            fprintf(pf, "MEZZOFONDISTA\n");
            break;
        case 3:
            fprintf(pf, "FONDISTA\n");
            break;
        default:
            puts("errore categoria\n");
            break;
        }
        fprintf(pf, "tempo MIGLIORE: %.2f\n", atleti[ordinati[i]].pb);
        fprintf(pf, "\n\n");
    }
    fclose(pf);
}