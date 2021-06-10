#include "Lector.h"

void Lector::LeerDatos(string nombreFile, int NumVid){
    ifstream fp(nombreFile);
    
    for (int i = 0; i < NumVid; i++) 
    {
        for (int j = 0; j < 8; j++)
        {
        fp >> notebook[i][j];
        } 
    }

}