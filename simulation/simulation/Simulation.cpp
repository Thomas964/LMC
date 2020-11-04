#include "Simulation.h"
using namespace std;


/*Calcul la temperature en fonction de l'altitude
Entrée = float
Return = float */
float Particule::calctemp(float altitude){
    return 0;
}

/*Calcul la pression en fonction de l'altitude
Entrée = float
Return = float */
float Particule::calcpre(float altitude){
    return 0;
}
/*juste une fonction test pour la communication des fichiers */
float Particule::test(float number){
    return number+1;
}

/*Constructeur*/
Particule::Particule(){
    p_temperature = 0;
    p_pression = 101300;
    p_x = 0;
    p_y = 0;
    p_z = 0;
    p_volume = 0;
    p_densité = 0;
    p_rayon = 0;
    p_presat = 0;
}
