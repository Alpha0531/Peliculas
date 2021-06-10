#ifndef EPISODIO_H_INCLUDED
#define EPISODIO_H_INCLUDED
#include "Video.h"
using namespace std;

class Episodio: public Video{
private:
    int ide;
public: 
    Episodio();
    Episodio(string, string, int, int, int);
    //Getters
    int getIde();
    //Setters
    void setIde(int);

};
#endif