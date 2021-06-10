#ifndef TEMPORADA_H_INCLUDED
#define TEMPORADA_H_INCLUDED
#include "Episodio.h"
#include <iostream>

using namespace std;

class Temporada{
    private:
        Episodio lista[10];
        int idt, epi;
    public:
        Temporada();
        Temporada(Episodio[], int,int);
        void setEpisodio(Episodio, int);
        void getInfo();
};
#endif