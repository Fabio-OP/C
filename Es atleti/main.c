#include "lib.h"

int main()
{
    clearFile ();
    puts("1");
    generateData ();
    puts("2");
    int totalPosition[ATLETI];
    bubbleSort(totalPosition);
    puts("3");
    personalBest();
    puts("4");
    for (int i = 0; i < 10; i++)
    {
        printf("i = %d\n", totalPosition[i]);
    }
    
    orderArray(totalPosition);
    puts("5");
    printFile(totalPosition);
    puts("6");
}