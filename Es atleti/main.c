#include "lib.h"

int main()
{
    clearFile ();
    puts("1");
    generateData ();
    puts("2");
    int totalPosition[ATLETI];
    personalBest();
    puts("3");
    bubbleSort(totalPosition);
    puts("4");
    orderArray(totalPosition);
    puts("5");
    printFile(totalPosition);
    puts("6");
}