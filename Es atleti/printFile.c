#include "lib.h"

void printFile()
{
    FILE* pf;
    pf=fopen("test.txt", "a");
    if(!pf)
    {
        printf("File non trovato");
        exit(EXIT_FAILURE);
    }
    for(int i = 0; i < ATLETI; i++){
        fprintf(pf, "nome cognome\n");
        fprintf(pf, "%s %s\n", atleti[i].anagrafica.nome, atleti[i].anagrafica.cognome);
        fprintf(pf, "anno di nascita: %d\n", atleti[i].anagrafica.annoNascita);
        fprintf(pf, "specialita: ");
        switch (atleti[i].Spec)
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
        fprintf(pf, "Tempo MIGLIORE: %.2f\n", atleti[i].pb);
        fprintf(pf, "Batteria: %d\n", atleti[i].batteria);
        fprintf(pf, "Corsia: %d\n", atleti[i].corsia);
        fprintf(pf, "\n\n");
    }
    fclose(pf);
}