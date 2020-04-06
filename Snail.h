#ifndef SNAIL_H
#define SNAIL_H

#include <string>
 

class Snail {
    private:
    std::string _nom;
    int _numero;
    int _motivation;
    int _distance; //Il commence a 0 donc pas besoin de le préciser à la ligne 19 !!
    
    public: 
    std::string getName();
    std::string getLook();
    int getDistance();
    void goForward();
    void getMotivation();
    Snail(std::string name, int motiv, int dossard);
}; 
#endif