#include <iostream>
#include <string>
#include "Snail.h"

using namespace std;  

int main() {
        
    Snail * Georges = new Snail("Georges", 5,1);
    //1 - on va chercher l'adresse ! 
    //2 - new appelle le construction & appele un pointeur vers l'objet créer
    Snail * David = new Snail("David", 7,1);
    
    int isReach = 0;
    int fin = 10;
    
    int choixJoueur;
    
    cout << "Le course va commencer !\n\n";
    cout << "Nous accueillons 2 participants pour cette grande épreuve !\n";
    cout << "Tous d'abord... " <<  (*Georges).getName() << ", il est " <<  (*Georges).getLook() << "\n";
    cout << "Et l'autre adversaire est " <<  (*Georges).getName() << ", il est " <<  (*Georges).getLook() << "\n";
    cout << "il est grand temps de se diriger vers la piste \n\n";
    
    cout << "|_____________________________________________|_______\n";
    cout << "@1                                            I       \n";
    cout << "@2                                            I       \n";
    cout << "|_____________________________________________|_______\n\n";
    
    
    cout << "3\n\n";
    cout << "2\n\n";
    cout << "1\n\n";
    cout << "Partez !!\n\n";
    
    while (isReach == 0)
    {
        cout << "Faire avancer Georges[1]  Motiver Georges[2]\n" ;
        cout << "Faire avancer David[3]  Motiver David[4]\n\n" ;
        
        cin >> choixJoueur;
        
        switch (choixJoueur)
        {
            case 1:
                (*Georges).goForward(); 
                cout << (*Georges).getName() << " avance !\n\n";
                //ou 
                //Georges->goForward();
            break;
            
            case 2:
                 (*Georges).getMotivation();
            break;
            
            case 3:
                (*David).goForward(); 
                cout << (*David).getName() << " avance !\n\n";
                //ou 
                //David->goForward();
            break;
            
            case 4:
                (*David).getMotivation();
            break;
        }
        
        if((*Georges).getDistance() >= fin || (*David).getDistance() >= fin)
        {
            isReach = 1;
        }
    }
    
    if (isReach == 1)
    {
        if ((*Georges).getDistance() >= fin)
        {
            cout << (*Georges).getName() << " à gagné !\n\n";
            cout << "|_____________________________________________|_______\n";
            cout << "I                                            @1       \n";
            cout << "@2                                            I       \n";
            cout << "|_____________________________________________|_______\n\n";
        }
        
        if ((*David).getDistance() >= fin)
        {
            cout << (*David).getName() << " à gagné !\n\n";
            cout << "|_____________________________________________|_______\n";
            cout << "@1                                            I       \n";
            cout << "I                                            @2       \n";
            cout << "|_____________________________________________|_______\n\n";
        }
    }
    
    
    return 0;
} 