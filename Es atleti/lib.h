#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ATLETI 10
#define BATTERIE 6
#define TEMPI 5
#define STRING_LENGTH 15

typedef enum{
    VELOCISTI =1, 
    MEZZOFONDO, 
    FONDISTI    
}SPECIALITA;

typedef struct{
    char nome[STRING_LENGTH];
    char cognome[STRING_LENGTH];
    int annoNascita;
}Anagrafica;

typedef struct{
    Anagrafica anagrafica;
    float tempo[TEMPI];
    int corsia;
    float pb;
    SPECIALITA Spec;
}Atleti;

Atleti atleti[ATLETI];

void printFile (int []);
void clearFile ();
void personalBest ();
void generateData ();
void orderArray (int []);
void bubbleSort (int []);