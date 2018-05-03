/*                                     ------------------------------------------------
                                      | ALL THE FUNCTIONS AND STRUCTURES MUST BE THERE |
                                       ------------------------------------------------                         */



/* ----------------------STRUCTURES --------------------*/
typedef struct company
{
    char name[20]; // attention faut mettre une allocation dynamique ici !!! Normalement c'est un char*
    char acronym[3];
    //list_planes company_planes;
}company;

typedef struct plane
{
    char id[7];
    int fuel;
    int consumption;
    char takeofftime[6];
    company company;
}plane;

/*
typedef struct plane_cell // Organisation de l'avion en fonction des autres
{
    Plane plane;
    struct plane_cell* following_company; // Avion suivant dans la même compagnie
    struct plane_cell* previous_company;  // Avion précédent dans la même compagnie
    struct plane_cell* following_waiting; // Avion suivant pour atterrissage ou décollage
}Plane_cell;*/

/* ----------------------------------- END STRUCTURES ------------------------------*/






/* ----------------------------------- FUNCTIONS -----------------------------------*/

plane InputPlane();

/* ----------------------------------- END FUNCTIONS -------------------------------*/
