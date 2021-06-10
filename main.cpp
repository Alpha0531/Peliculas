#include <iostream>
#include "Video.h"
#include "Serie.h"
#include "Episodio.h"

#include "Pelicula.h"
#include "Lector.h"
using namespace std;

int main()
{
    Lector l1;
    
    Pelicula pel[20];
    Serie ser[20];

    int opcion=1,conV=0,conP=0,conS=0, conE=0;
    string nombreFile;

while(opcion != 0)
{
cout<<"1. Cargar Archivo de Datos/Agregar serie, video, pelicula."<<endl;
cout<<"2. Mostrar los videos en general con una cierta calificacion o de un cierto genero"<<endl;
cout<<"3. Mostrar los episodios de una determinada serie con una calificacion determinada"<<endl;
cout<<"4. Mostrar las peliculas con cierta calificacion"<<endl;
cout<<"5. Calificar un video"<<endl;
cout<<"0. Salir"<<endl;
cout<<" "<<endl;
cout<<"Ingrese la opcion deseada: "<<endl;
cin>>opcion;
//Secuencias de IF
    if (opcion == 1)
    {
        
        cout<<"Ingrese el nombre del documento .txt "<<endl;
        cin>>nombreFile;
        l1.LeerDatos(nombreFile,30);
        for (int i = 0; i<17;i++)
        {
            
            if (l1.notebook[i][0]=="Pelicula")
            {
                pel[conP] =  Pelicula(l1.notebook[i][2],l1.notebook[i][3],stoi(l1.notebook[i][4]),stoi(l1.notebook[i][5]),stoi(l1.notebook[i][1]));
                conP+=1;
            }
            else if (l1.notebook[i][0]=="Serie")
            {
                ser[conS]= Serie(stoi(l1.notebook[i][1]),l1.notebook[i][2],l1.notebook[i][3],stoi(l1.notebook[i][4]));
                conS+=1;
                conE =0;
                
            }
            else if (l1.notebook[i][0]=="Capitulo"){
                Episodio eps = Episodio(l1.notebook[i][1],l1.notebook[i][2],stoi(l1.notebook[i][3]),stoi(l1.notebook[i][4]),stoi(l1.notebook[i][5]));
                
                ser[conS-1].setEp(eps,conE);
                conE+=1;
            }

            else {
                break;
             
            }
            
        
        }
    }
    else if (opcion == 2)
    {
        int cp=0;
        int getCal=0;
        cout << "Ingrese calificacion a buscar" << endl;
        cin >> getCal;
        for(int i=0;i<conS;i++){
        for(int j=0; j<ser[i].getNumCap();j++)
        {
            if(getCal == ser[i].listE[j].getCalificacion()){
                cout<<ser[i].listE[j].getNombre()<<endl;
               cp = cp+1;
            }   
        }
        }
        for(int i=0; i<conP; i++){
            if (getCal ==pel[i].getCalificacion()){
            cout << pel[i].getNombre() << endl;
            
            cp = cp+1;
            }
        }
        if(cp == 0){
            cout<<"No hay videos con esta calificacion"<<endl;
        }
    }
    else if (opcion == 3)
    {
        int comp=0;
        int nums=0;
        string nserie;
        int getCal;
        cout<<"Ingrese el nombre de la serie a buscar"<<endl;
        cin>>nserie;
        cout << "Ingrese calificacion a buscar" << endl;
        cin >> getCal;
        for(int i=0; i<conS; i++){
            if(nserie==ser[i].getNombre()){
                nums=i;
            }
        }
        ser[nums].mostrarId();
        cout<<"Los episodios con esa calificacion son: "<<endl;
        for(int j=0; j<ser[nums].getNumCap();j++)
        {
            if(getCal == ser[nums].listE[j].getCalificacion()){
                cout<<ser[nums].listE[j].getNombre()<<endl;
                comp+=1;
            }   
        }

        if(comp == 0){
            cout<<"No hay episodios con esa calificacion, en esta serie"<<endl;
        }
        float vari = 0;
        Episodio re("","",0,0,0);
        for (int h =0;h<ser[nums].getNumCap();h++)
        {
            re = re + ser[nums].listE[h];
        }
        vari=re.getCalificacion()/ser[nums].getNumCap();
        cout<<"El promedio de calificacion para esta serie es: "<<vari<<endl;
        
        

    }
    else if (opcion == 4)
    {
        int getCal;
        cout << "Ingrese calificacion a buscar" << endl;
        cin >> getCal;
        int cp =0;

        for(int i=0; i<conP; i++){
            if (getCal ==pel[i].getCalificacion()){
            cout << pel[i];
            pel[i].mostrarId();
            
            cp = cp+1;
            }
        }
        if(cp == 0){
            cout<<"No hay peliculas con esta calificacion"<<endl;
        }

    }
    else if (opcion == 5)
    {
    string nvideo;
    string califvid;
    cout<<"Ingrese el nombre del video a calificar"<<endl;
    cin>>nvideo;
    cout<<"Ingrese la calificacion"<<endl;
    cin>>califvid;
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(nvideo == l1.notebook[i][j])
            {
                if("Capitulo"==l1.notebook[i][0])
                {
                l1.notebook[i][4] = califvid;
                }
                if("Pelicula"==l1.notebook[i][0])
                {
                l1.notebook[i][5] = califvid;
                }
            }
        }
        
    }
    //Sobreescribir archivo
    ofstream file; 
    file.open("Programa.txt", ios::out); 
    if(file.fail()){
        cout << "No se pudo leer" << endl; 
        exit(1);
    } 
    for(int i=0;i<24;i++)
    {
        for(int j=0;j<8;j++)
        {
            file<<l1.notebook[i][j]<<" ";
        }
        file<<endl;
    }
    
    int opcion=1,conV=0,conP=0,conS=0, conE=0;
    l1.LeerDatos(nombreFile,30);
    for (int i = 0; i<17;i++)
        {
            
            if (l1.notebook[i][0]=="Pelicula")
            {
                pel[conP] =  Pelicula(l1.notebook[i][2],l1.notebook[i][3],stoi(l1.notebook[i][4]),stoi(l1.notebook[i][5]),stoi(l1.notebook[i][1]));
                conP+=1;
            }
            else if (l1.notebook[i][0]=="Serie")
            {
                ser[conS]= Serie(stoi(l1.notebook[i][1]),l1.notebook[i][2],l1.notebook[i][3],stoi(l1.notebook[i][4]));
                conS+=1;
                conE =0;
                
            }
            else if (l1.notebook[i][0]=="Capitulo"){
                Episodio eps = Episodio(l1.notebook[i][1],l1.notebook[i][2],stoi(l1.notebook[i][3]),stoi(l1.notebook[i][4]),stoi(l1.notebook[i][5]));
                
                ser[conS-1].setEp(eps,conE);
                conE+=1;
            }

            else {
                break;
             }
    
        }
    }
    else if (opcion == 0)
    {
        break;
    }
    
}
} 