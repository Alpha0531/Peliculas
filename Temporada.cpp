#include "Temporada.h"

Temporada::Temporada(){
    int idt = 0;
}
Temporada::Temporada(Episodio lista[], int idt,int epi){
    for(int i = 0; i<epi;i++)
    {
        this->lista[i]=lista[i];
    }
    this->epi=epi;
    this->idt = idt;
}
void Temporada::setEpisodio(Episodio ep, int i){
    lista[i] = ep;
}
void Temporada::getInfo(){
    for (int i =0; i<epi; i++){
        cout<<lista[i].getNombre() << i <<endl;
    }
}