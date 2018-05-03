#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

plane InputPlane()
{
    /* ------------ HERE ARE THE VARIABLES -------------- */

    plane avion;
    char ans[4];
    int comp1, comp2, comp3;
    //int ans;

    /* ------------ END OF THE VARIABLES ---------------- */

    printf("Do you want to enter a new plane ? ( 1 for Yes or 0 for No )\n");
    scanf(" %s", ans);
    printf("ans = %s", ans);
    comp1 = strcmp(ans, "YES");
    comp2 = strcmp( ans, "yes");
    comp3 = strcmp( ans, "Yes");
    if ( comp1 == 0 || comp2 == 0 || comp3 == 0/*ans == "YES" /*|| ans == "yes" || ans == "Yes" /*ans == 1*/ )
    {
        printf("1\n");

        do
        {
            printf("What is its ID ? ( 7 characters maximum )\n");
            scanf("%s", &avion.id);
        } while( strlen( avion.id ) > 7 );


        printf("What is it's fuel level ?\n");
        scanf("%d", &avion.fuel);

        printf("What is it's fuel consumption per minute ?\n");
        scanf("%d", &avion.consumption);

        printf("When is he planing to take-off ?\n");
        scanf("%s", &avion.takeofftime);

        printf("What is its company name ?\n");
        scanf("%s", &avion.company.name);

        do
        {
            printf("Acronym of the company ?\n");
            scanf("%s", &avion.company.acronym);
        } while( strlen( avion.company.acronym ) > 3 );

    }
    else
    {
        printf("0\n");
    }
    return avion;
}
