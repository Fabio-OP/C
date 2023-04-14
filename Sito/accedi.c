#include "lib.h"

void accesso()
{
    BOOL uguali = 0;
    puts("ACCEDI:\nInserisci nome utente e password\n");
    scanf("%s", sito.utente.nomeUtente);
    FILE* file;
    file = fopen("sito.txt", "a");
    if (!file)
    {
        puts("File non trovato");
        exit(EXIT_FAILURE);
    }
    char riga[100];
    char confrontoID[LENGTH*2];
    while (fgets(riga, 100, file) != NULL)
    {
        sscanf(riga, "%*[^;];%*[^;];%s", confrontoID);//nome;cognome;id_utente;password_criptata
        if (strcmp(confrontoID, sito.utente.nomeUtente) == 0)   uguali = 1;
    }
    if (!uguali)
    {
        puts("Inserisci la password: ");
    }else{
        puts("Nome utente non trovato\n");
        puts("Ripvova(0) \tCrea un account(1) \tEsci(2)");
    }
    
}