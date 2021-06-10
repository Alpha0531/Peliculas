#ifndef EPISODIO_H_INCLUDED
#define EPISODIO_H_INCLUDED
#include "Video.h"
using namespace std;

class Episodio: public Video{
private:
    int ide;
    int calificacion;
public: 
    Episodio();
    Episodio(string, string, int, int, int);
    //Getters
    int getIde();
    //Setters
    void setIde(int);
    //Sobrecarga
    Episodio operator+ (const Episodio& val){
        
        int suma = this->calificacion + val.calificacion;
        return Episodio("","",0,suma,0);
    }

};
#endif