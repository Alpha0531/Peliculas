#include "Serie.h"

//Constructores
Serie::Serie(){
    int id = 0;
    string Nombre = "";
}
Serie::Serie(int id,string Nombre,Temporada listat[]){
    this->id = id;
    this->Nombre=Nombre;
    for (int i=0; i<2; i++){
        this->listat[i]=listat[i];
    }
    
}

//Getter
int Serie::getIdS(){
    return id;
}
string Serie::getNombre(){
    return Nombre;
}

//Setters
void Serie::setIdS(int id){
    this -> id = id;
}
void Serie::getInfoT(){
    for (int i=0; i<2; i++){
        cout << "Temporada" << i <<endl;
        listat[i].getInfo();
    }
}