#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include "Video.h"
#include <iostream>

using namespace std;

class Pelicula: public Video
{
private:
    int id;
public:
    Pelicula();
    Pelicula(string, string, int, int, int);
    //Getters
    int getIdP();
    //Setter
    void setIdP(int);

};
#endif
