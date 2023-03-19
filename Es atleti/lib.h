#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ATLETI 30
#define CORSIE 6
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
    int batteria;
    float pb;
    SPECIALITA Spec;
}Atleti;

Atleti atleti[ATLETI];

void printFile ();
void clearFile ();
void personalBest ();
void generateData ();
void orderArray ();
void bubbleSort ();
void batterie (int , int , int);