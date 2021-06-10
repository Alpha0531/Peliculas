#include "Serie.h"

//Constructores
Serie::Serie(){
    int id = 0;
    string Nombre = "";
    int numCap=0;
}
Serie::Serie(int id,string Nombre, string genero, int numCap){
    this->id = id;
    this->Nombre=Nombre;
    this->numCap=numCap;
    
}

//Getter
int Serie::getIdS(){
    return id;
}
string Serie::getNombre(){
    return Nombre;
}
int Serie::getNumCap(){
    return numCap;
}
string Serie::getGenero(){
    return genero;
}
//Setters
void Serie::setIdS(int id){
    this -> id = id;
}

void Serie::setEp(Episodio ep, int h){
        listE[h]=ep;
}

//Virtual
void Serie::mostrarId(){
    cout<<"El id de la serie es: "<<getIdS()<<endl;
}