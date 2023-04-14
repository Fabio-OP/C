#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 15
#define MIN 6
#define NOMESITO "bello"

typedef enum {registrati, accedi} AZIONI;
typedef enum {falso, vero} BOOL;

typedef struct{
    char nome[LENGTH];
    char cognome[LENGTH];
    char nomeUtente[LENGTH*2];
    char password[LENGTH];
    char tempPassword[LENGTH*2];
}Dati;

typedef struct{
    AZIONI azione;
    Dati utente;
}Sito;

Sito sito;


//void registrazione();
void azioni();
void accesso();