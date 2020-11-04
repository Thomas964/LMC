#ifndef Simulation_h
#define Simulation_h

#include <stdio.h>

class Particule{
    //Méthode
    public:
    Particule();
    float calctemp(float temperature);
    float calcpre(float pression);
    float test(float number);
    

    private:
    float p_temperature;
    float p_pression;
    float p_x;
    float p_y;
    float p_z;
    float p_volume;
    float p_densité;
    int p_rayon;
    float p_presat;
    
    
    
};
#endif /* Simulation_hpp */
