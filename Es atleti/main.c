#include "lib.h"

int main()
{
    srand(time(NULL));
    clearFile ();
    generateData ();
    personalBest();
    orderArray();
    bubbleSort();
    printFile();
}