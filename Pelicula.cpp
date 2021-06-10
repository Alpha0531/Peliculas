#include "Pelicula.h"

//Constructores
Pelicula::Pelicula(){
    int id = 0;
}
Pelicula::Pelicula(string nombre, string genero, int duracion, int calificacion, int id):Video(nombre, genero, duracion, calificacion){
    this -> id = id;
    this->nombre = nombre;
}

//Getter
int Pelicula::getIdP(){
    return id;
}

//Setters
void Pelicula::setIdP(int id){
    this -> id = id;
}

//Virtual
void Pelicula::mostrarId(){
    cout<<"El id de la pelicula es: "<<getIdP()<<endl;
}
