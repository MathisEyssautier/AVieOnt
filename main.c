#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

int main()
{
    /* -------------- VARIABLES ------------------- */

    plane avion;
    int land_time;

    /* -------------- FIN DES VARIABLES ----------- */


    avion = InputPlane();
    land_time = ( avion.fuel / avion.consumption ) ;
    //printf("%s", avion.takeofftime);
    if ( land_time != NULL )
    {
        printf("Takeoff of %s ( %s ) flight %s expected for takeoff at %s. He got a fuel level of %d with a fuel consumption of %d units per minute. He must land within the %d next minutes.", avion.company.name, avion.company.acronym, avion.id, avion.takeofftime, avion.fuel, avion.consumption, land_time);
    }

    return 0;
}
