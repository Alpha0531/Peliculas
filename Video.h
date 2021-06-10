#ifndef VIDEO_H_INCLUDED
#define VIDEO_H_INCLUDED

#include <iostream>

using namespace std;

class Video
{
private:
    string nombre;
    string genero;
    int duracion;
    int calificacion;

public:
    Video();
    Video(string, string, int, int);
    //Getters
    string getNombre();
    int getCalificacion();
    //Setters
    string getGenero();
    int getDuracion();
    void setNombre(string);
    void setGenero(string);
    void setDuracion(int);
    void setCalificacion(int);
    
};

#endif