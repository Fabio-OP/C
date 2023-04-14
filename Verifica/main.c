#include "lib.h"

int main()
{
    Dipendenti dip[DIPMAX];
    FILE* file;
    int n_dip = 0;
    lettura(file, dip, & n_dip);
    while (1)
    {
        char scelt = menu();
        scelta(file, dip, & n_dip, scelt);
    }
}