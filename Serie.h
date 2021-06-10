#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Temporada.h"
#include <iostream>

using namespace std;

class Serie
{
private:
    int id;
    string Nombre;
    Temporada listat[2];
public:
    Serie();
    Serie(int,string,Temporada[]);
    //Getters
    int getIdS();
    string getNombre();
    //Setter
    void setIdS(int);
    void getInfoT();

};
#endif