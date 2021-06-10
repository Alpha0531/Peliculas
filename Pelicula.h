#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED
#include "Video.h"
#include "Id.h"
#include <iostream>

using namespace std;

class Pelicula: public Video, public Id
{
private:
    int id;
    string nombre;
public:
    Pelicula();
    Pelicula(string, string, int, int, int);
    //Getters
    int getIdP();
    //Setter
    void setIdP(int);
    void mostrarId();

    //Sobrecarga
    friend ostream& operator<< (ostream &out, Pelicula const &t)
    {
        out<<t.nombre<<endl;
        return out;
    }

};
#endif
