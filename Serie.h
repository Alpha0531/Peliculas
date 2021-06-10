#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED
#include "Episodio.h"
#include "Id.h"
#include <iostream>

using namespace std;

class Serie:public Id
{
private:
    int id, numCap;
    string Nombre, genero;
    
    
public:
    Serie();
    Serie(int,string,string,int);
    //Getters
    int getIdS();
    string getNombre();
    int getNumCap();
    string getGenero();
    //Setter
    void setIdS(int);
    void getInfoT();
    void setEp(Episodio,int);
    Episodio listE[15];
    void mostrarId();
    

};
#endif