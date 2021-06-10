#include "Episodio.h"

Episodio::Episodio(){
    int ide =0;
}
Episodio::Episodio(string nombre, string genero, int duracion, int calificacion, int ide):Video(nombre, genero, duracion, calificacion){
    this -> ide = ide;
}

//Getters
int Episodio::getIde(){
    return ide;
}
//Setters
void Episodio::setIde(int ide){
    this -> ide = ide;
}