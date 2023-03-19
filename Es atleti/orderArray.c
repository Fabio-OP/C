#include "lib.h"

void orderArray ()
{
    for (int i = 0; i < ATLETI-1; i++) {
        for (int j = i+1; j < ATLETI; j++) {
            if (atleti[j].Spec < atleti[i].Spec) {
                Atleti temp = atleti[i];
                atleti[i] = atleti[j];
                atleti[j] = temp;
            }
        }
    }
}