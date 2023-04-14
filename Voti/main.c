#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 20
#define MATERIE 5

typedef enum {FALSO, VERO} BOOL;
typedef enum {ITALIANI, STORIA, GEOGRAFIA, MATEMATICA, SCIENZE} Materie;
typedef struct
{
    char nome[LENGTH];
    char cognome[LENGTH];
    float votiOrale[MATERIE];
    float votiScritto[MATERIE];
    int controlloMat[MATERIE];
    float mediaGenerale;
}Studente;

int controlloVoto(int);
int controlloVoto(int voto)
{
    if (voto < 0 || voto > 10)
    {
        puts("Voto inesistente! Riprova");
        return 0;
    }else{
        return 1;
    }
    
}
void stampaFile(int, Studente*, int [MATERIE][3]);

int main()
{
    int migliore[MATERIE][3] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};//R0 orale, R1 scritto, R2 generale
    int nStudenti;
    Materie materie;
    puts("Quanti studenti vuoi inserire?");
    BOOL controllo = 0;
    do
    {
        scanf("%d", & nStudenti);
        if ( nStudenti >= 0){
            controllo = 1;
        }
    } while (!controllo);
    Studente* stud = (Studente*) malloc(nStudenti*sizeof(Studente));
    if(!stud)   return puts("Spazio in memoria non disponibile");

    for (int i = 0; i < nStudenti; i++)//inserire voti
    {
        for (int j = 0; j < MATERIE; j++)
        {
            stud[i].controlloMat[j] = 0;
        }
        
        printf("Studente numero %d\n", i+1);
        printf("Inserisci nome studente: ");
        scanf("%s", stud[i].nome);
        printf("Inserisci cognome studente: ");
        scanf("%s", stud[i].cognome);
        for (int j = 0; j < MATERIE; j++)
        {
            printf("Seleziona materia\nITALIANO = 0, STORIA = 1, GEOGRAFIA = 2, MATEMATICA = 3, SCIENZE = 4: ");
            controllo = 0;
            do
            {
                scanf("%d", (int*)&materie);
                if (materie <= 4 && materie >= 0)
                {
                    controllo = 1;
                }else{
                    puts("Materia insesistente");
                }
                
            } while (!controllo);
            
            switch (materie)
            {
            case 0:
                puts("Voti italiano");
                if (stud[i].controlloMat[materie] == 0)
                {
                    controllo = 0;
                    do
                    {
                        puts("Scritto");
                        scanf("%f", & stud[i].votiScritto[materie]);
                        controllo = controlloVoto(stud[i].votiScritto[materie]);
                    } while (!controllo);
                    controllo = 0;
                    do
                    {
                        puts("Orale");
                        scanf("%f", & stud[i].votiOrale[materie]);
                        stud[i].controlloMat[materie] = 1;
                        controllo = controlloVoto(stud[i].votiOrale[materie]);
                    } while (!controllo);
                    
                }else   puts("\nVoti gia' inseriti\n"), j--;
                break;
            case 1:
                puts("Voti storia");
                if (stud[i].controlloMat[materie] == 0)
                {
                    controllo = 0;
                    do
                    {
                        puts("Scritto");
                        scanf("%f", & stud[i].votiScritto[materie]);
                        controllo = controlloVoto(stud[i].votiScritto[materie]);
                    } while (!controllo);
                    controllo = 0;
                    do
                    {
                        puts("Orale");
                        scanf("%f", & stud[i].votiOrale[materie]);
                        controllo = controlloVoto(stud[i].votiOrale[materie]);
                    } while (!controllo);
                    stud[i].controlloMat[materie] = 1;
                }else   puts("\nVoti gia' inseriti\n"), j--;
                break;
            case 2:
                puts("Voti geografia");
                if (stud[i].controlloMat[materie] == 0)
                {
                    controllo = 0;
                    do
                    {
                        puts("Scritto");
                        scanf("%f", & stud[i].votiScritto[materie]);
                        controllo = controlloVoto(stud[i].votiScritto[materie]);
                    } while (!controllo);
                    controllo = 0;
                    do
                    {
                        puts("Orale");
                        scanf("%f", & stud[i].votiOrale[materie]);
                        controllo = controlloVoto(stud[i].votiOrale[materie]);
                    } while (!controllo);
                    stud[i].controlloMat[materie] = 1;
                }else   puts("\nVoti gia' inseriti\n"), j--;
                break;
            case 3:
                puts("Voti matematica");
                if (stud[i].controlloMat[materie] == 0)
                {
                    controllo = 0;
                    do
                    {
                        puts("Scritto");
                        scanf("%f", & stud[i].votiScritto[materie]);
                        controllo = controlloVoto(stud[i].votiScritto[materie]);
                    } while (!controllo);
                    controllo = 0;
                    do
                    {
                        puts("Orale");
                        scanf("%f", & stud[i].votiOrale[materie]);
                        controllo = controlloVoto(stud[i].votiOrale[materie]);
                    } while (!controllo);
                    stud[i].controlloMat[materie] = 1;
                }else   puts("\nVoti gia' inseriti\n"), j--;
                break;
            case 4:
                puts("Voti scienze");
                if (stud[i].controlloMat[materie] == 0)
                {
                    controllo = 0;
                    do
                    {
                        puts("Scritto");
                        scanf("%f", & stud[i].votiScritto[materie]);
                        controllo = controlloVoto(stud[i].votiScritto[materie]);
                    } while (!controllo);
                    controllo = 0;
                    do
                    {
                        puts("Orale");
                        scanf("%f", & stud[i].votiOrale[materie]);
                        controllo = controlloVoto(stud[i].votiOrale[materie]);
                    } while (!controllo);
                    stud[i].controlloMat[materie] = 1;
                }else   puts("\nVoti gia' inseriti\n"), j--;
                break;
            }
        }
        
    }
    for (int i = 0; i < nStudenti; i++)//media generale
    {
        stud[i].mediaGenerale = 0;
        for (int j = 0; j < MATERIE; j++)
        {
            stud[i].mediaGenerale += stud[i].votiOrale[j];
            stud[i].mediaGenerale += stud[i].votiScritto[j];
        }
        stud[i].mediaGenerale /= MATERIE*2;
    }
    for (int i = 0; i < nStudenti; i++)
    {
        if (nStudenti == 1)
        {
            puts("Non ci sono studenti da comparare\n");
            printf("Studente migliore %s %s\n", stud[i].nome, stud[i].cognome);
            stampaFile(nStudenti, stud, migliore);
            return 0;
        }else{
            for (int j = 0; j < MATERIE; j++)
            {
                if (stud[i].votiOrale[j] > migliore[0][j])      migliore[0][j] = i;
                if (stud[i].votiScritto[j] > migliore[1][j])    migliore[1][j] = i;
            }
            if (stud[i].mediaGenerale > migliore[2][0])     migliore[2][0] = i;
        }
    }
    stampaFile(nStudenti, stud, migliore);
    stud = NULL;
    free(stud);
}
void stampaFile(int nStud, Studente* stud, int migliore[MATERIE][3])
{
    FILE* file;
    file = fopen("test.txt", "w");
    if (!file)
    {
        puts("file non trovato");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < nStud; i++)
    {
        fprintf(file, "Studente %s %s\n", stud[i].nome, stud[i].cognome);
        fprintf(file, "Voti:\n");
        for (int j = 0; j < MATERIE; j++)
        {
            fprintf(file, "Materia ");
            switch (j)
            {
                case 0:
                    fprintf(file, "italiano\n");
                    fprintf(file, "Scritto \t");
                    fprintf(file, "%.2f\n", stud[i].votiScritto[j]);
                    fprintf(file, "Orale \t\t");
                    fprintf(file, "%.2f\n", stud[i].votiOrale[j]);
                    break;
                case 1:
                    fprintf(file, "storia\n");
                    fprintf(file, "Scritto \t");
                    fprintf(file, "%.2f\n", stud[i].votiScritto[j]);
                    fprintf(file, "Orale \t\t");
                    fprintf(file, "%.2f\n", stud[i].votiOrale[j]);
                case 2:
                    fprintf(file, "geografia\n");
                    fprintf(file, "Scritto \t");
                    fprintf(file, "%.2f\n", stud[i].votiScritto[j]);
                    fprintf(file, "Orale \t\t");
                    fprintf(file, "%.2f\n", stud[i].votiOrale[j]);
                case 3:
                    fprintf(file, "matematica\n");
                    fprintf(file, "Scritto \t");
                    fprintf(file, "%.2f\n", stud[i].votiScritto[j]);
                    fprintf(file, "Orale \t\t");
                    fprintf(file, "%.2f\n", stud[i].votiOrale[j]);
                case 4:
                    fprintf(file, "schienze\n");
                    fprintf(file, "Scritto \t");
                    fprintf(file, "%.2f\n", stud[i].votiScritto[j]);
                    fprintf(file, "Orale \t\t");
                    fprintf(file, "%.2f\n", stud[i].votiOrale[j]);
            }
            fprintf(file, "\n");
        }
    }
    if (nStud > 1)
    {
        for (int i = 0; i < MATERIE; i++)
        {
            fprintf(file, "Studente migliore in ");
            switch (i)
            {
                case 0:
                    fprintf(file, "italiano scritto %s %s\n\n", stud[migliore[1][i]].nome, stud[migliore[1][i]].cognome);
                    fprintf(file, "italiano orale %s %s\n", stud[migliore[0][i]].nome, stud[migliore[0][i]].cognome);
                    break;
                case 1:
                    fprintf(file, "storia scritto %s %s\n\n", stud[migliore[1][i]].nome, stud[migliore[1][i]].cognome);
                    fprintf(file, "storia orale %s %s\n", stud[migliore[0][i]].nome, stud[migliore[0][i]].cognome);
                    break;
                case 2:
                    fprintf(file, "geografia scritto %s %s\n\n", stud[migliore[1][i]].nome, stud[migliore[1][i]].cognome);
                    fprintf(file, "geografia orale %s %s\n", stud[migliore[0][i]].nome, stud[migliore[0][i]].cognome);
                    break;
                case 3:
                    fprintf(file, "matematica scritto %s %s\n\n", stud[migliore[1][i]].nome, stud[migliore[1][i]].cognome);
                    fprintf(file, "matematica orale %s %s\n", stud[migliore[0][i]].nome, stud[migliore[0][i]].cognome);
                    break;
                case 4:
                    fprintf(file, "scienze orale %s %s\n\n", stud[migliore[1][i]].nome, stud[migliore[1][i]].cognome);
                    fprintf(file, "scienze orale %s %s\n", stud[migliore[0][i]].nome, stud[migliore[0][i]].cognome);
                    break;
            }
        }
    }
    
    fprintf(file, "Studente migliore media generele %s %s\n", stud[migliore[2][0]].nome, stud[migliore[2][0]].cognome);
    fclose(file);
}