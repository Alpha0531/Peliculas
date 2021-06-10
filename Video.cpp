#include "Video.h"

//Constructores
Video::Video(){
    string nombre = "video";
    string genero = "genero";
    int calificacion = 0;
    int duracion = 0;
}

Video::Video(string nombre, string genero, int duracion, int calificacion){
    this -> nombre = nombre;
    this -> genero = genero;
    this -> duracion = duracion;
    this -> calificacion = calificacion;
}

//Getters
string Video::getNombre(){
    return nombre;
}
string Video::getGenero(){
    return genero;
}
int Video::getDuracion(){
    return duracion;
}
int Video::getCalificacion(){
    return calificacion;
}

//Setters
void Video::setNombre(string nombre){
    this -> nombre = nombre;
}
void Video::setGenero(string genero){
    this -> genero = genero;
}
void Video::setCalificacion(int calificacion){
    this -> calificacion = calificacion;
}
void Video::setDuracion(int duracion){
    this -> duracion = duracion;
}