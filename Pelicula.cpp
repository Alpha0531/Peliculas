#include "Pelicula.h"

//Constructores
Pelicula::Pelicula(){
    int id = 0;
}
Pelicula::Pelicula(string nombre, string genero, int duracion, int calificacion, int id):Video(nombre, genero, duracion, calificacion){
    this -> id = id;
}

//Getter
int Pelicula::getIdP(){
    return id;
}

//Setters
void Pelicula::setIdP(int id){
    this -> id = id;
}
