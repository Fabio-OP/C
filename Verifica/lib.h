#include <stdio.h>
#include <stdlib.h>

#define DIM 100
#define DIPMAX 20
#define DIPMIN 5

typedef enum {falso, vero} bool;

typedef struct{
    char nome[DIM];
    char cognome[DIM];
    int anzianita;
    int stipendio;
}Dipendenti;

void lettura(FILE* file, Dipendenti dip[], int* n_dip);
char menu();
void scelta(FILE* file, Dipendenti dip[], int* n_dip, char scelt);
void stampa(FILE* file, Dipendenti dip[], int n_dip);