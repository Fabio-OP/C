#include "lib.h"

void batterie(int contV, int contM, int contF)
{
    int cors;
    int batt;
    for (int i = 0, batt = 1, cors = 1; i < contV; i++)
    {
        if (cors > 6)
        {
            cors = 1;
            batt++;
        }
        atleti[i].batteria = batt;
        atleti[i].corsia = cors;
        cors++; 
    }
    for (int i = 0, batt = 1, cors = 1; i < contM; i++)
    {
        if (cors > 6)
        {
            cors = 1;
            batt++;
        }
        atleti[i+contV].batteria = batt;
        atleti[i+contV].corsia = cors;
        cors++; 
    }
    for (int i = 0, batt = 1, cors = 1; i < contF; i++)
    {
        if (cors > 6)
        {
            cors = 1;
            batt++;
        }
        atleti[i+contV+contF].batteria = batt;
        atleti[i+contV+contF].corsia = cors;
        cors++; 
    }
    
}