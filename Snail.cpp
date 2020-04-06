#ifndef SNAIL_CPP
#define SNAIL_CPP
#include <iostream>

#include "Snail.h"

using namespace std;

/*
std::string _nom;
int _numero;
int _motivation;
int _distance;
*/

std::string Snail::getName(){
  return _nom;
}

std::string Snail::getLook(){
    return "@"+std::to_string(_numero);
}
 
int Snail::getDistance(){
    return _distance;
} 

void Snail::goForward(){
  _distance += _motivation;
  _motivation--;
};

void Snail::getMotivation(){
  _motivation++;
};

Snail::Snail(std::string name, int motiv, int dossard):
    _nom(name), _motivation(motiv), _numero(dossard), _distance(0)
{}

#endif
