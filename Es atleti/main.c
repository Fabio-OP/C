#include "lib.h"

int main()
{
    clearFile ();
    generateData ();
    int totalPosition[ATLETI];
    bubbleSort(totalPosition);
    personalBest();
}