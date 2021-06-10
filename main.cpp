#include <iostream>
#include "Video.h"
#include "Serie.h"
#include "Episodio.h"
#include "Temporada.h"
#include "Pelicula.h"
#include "Lector.h"
using namespace std;

int main()
{
    Lector l1;
    Video vid[10];
    Pelicula pel[10];
    Serie ser[10];

    int opcion=1,conV=0,conP=0,conS=0;
/* string nS;

Episodio eps[2];
Episodio eps1[2];
Temporada temp1[2];
for (int i=0; i<2; i++ ){
    cout << "Nombre del capitulo" << endl;
    cin >> nS;
    eps[i]=Episodio(nS,"Accion",120,4,102);

}
temp1[0]= Temporada(eps,1031);
temp1[0].getInfo();
temp1[1]= Temporada(eps1,1030);
temp1[1].getInfo();


    return 0;
} */

while(opcion != 0)
{
cout<<"1. Cargar Archivo de Datos/Agregar serie, video, pelicula."<<endl;
cout<<"2. Mostrar los videos en general con una cierta calificación o de un cierto género"<<endl;
cout<<"3. Mostrar los episodios de una determinada serie con una calificacion determinada"<<endl;
cout<<"4. Mostrar las películas con cierta calificacion"<<endl;
cout<<"5. Calificar un video"<<endl;
cout<<"0. Salir"<<endl;
cout<<" "<<endl;
cout<<"Ingrese la opcion deseada: "<<endl;
cin>>opcion;
//Secuencias de IF
    if (opcion == 1)
    {
        string nombreFile;
        cout<<"Ingrese el nombre del documento .txt "<<endl;
        cin>>nombreFile;
        l1.LeerDatos(nombreFile,24);
        for (int i = 0; i<12;i++)
        {
            
            if (l1.notebook[i][0]=="Pelicula")
            {
                pel[conP] =  Pelicula(l1.notebook[i][3],l1.notebook[i][2],stoi(l1.notebook[i][4]),stoi(l1.notebook[i][5]),stoi(l1.notebook[i][1]));
                conP+=1;
            }
            else if (l1.notebook[i][0]=="Serie")
            {
                Temporada tem[stoi(l1.notebook[i][4])];
                for (int t=0; t<stoi(l1.notebook[i][4]); t++){
                    Episodio eps[stoi(l1.notebook[i][5])];
                    for (int h=0; h<stoi(l1.notebook[i][5]); h++){
                        eps[h]=Episodio(l1.notebook[i][2]," ",stoi(l1.notebook[i][6]),stoi(l1.notebook[i][7]),30);
                        
                        
                    }
                    tem[t]=Temporada(eps,20,stoi(l1.notebook[i][5]));
                    
                }
            
                ser[conS]=Serie(stoi(l1.notebook[i][1]),l1.notebook[i][2],tem);
                conS+=1;
                

            }
            else {
                break;
             
            }

        
        /* if (opcion1==1){
            string n,g;
            int d,c;
            cout << "Nombre de la pelicula" << endl;
            cin>>n;
            cout << "Genero de la pelicula" << endl;
            cin>>g;
            cout << "Duracion de la pelicula" << endl;
            cin>>d;
            cout << "Calificacion de la pelicula" << endl;
            cin>>c;
            pel[conP]=Pelicula(n,g,d,c,90);
            conP+=1;
        }
        else if (opcion1==2){
            string n,g;
            int d,nE,nT,c;
            cout << "Numero de Temporadas de la serie" << endl;
            cin >>nT;
            Temporada tem[nT];
            for (int t=0; t<nT; t++){
            cout << "Numero de episodios de la serie" << endl;
            cin >>nE;
            Episodio eps[nE];
            for (int i=0; i<nE; i++){
                cout <<"Nombre del episodio" << i+1 <<endl;
                cin >> n;
                cout <<"Duracion del episodio " << i+1 <<endl;
                cin >> d;
                cout <<"Calificacion del episodio " << i+1 <<endl;
                cin >> c;
                eps[i]=Episodio(n,"",d,c,30);
            }
            tem[t]=Temporada(eps,20);
            }
            cout << "Nombre de la serie" << endl;
            cin >> n;
            ser[conS]=Serie(50,n,tem);
            conS+=1;
            
        }
        else if (opcion1==3){
            string n,g;
            int d,c;
            cout << "Nombre del video" << endl;
            cin>>n;
            cout << "Genero del video" << endl;
            cin>>g;
            cout << "Duracion del video" << endl;
            cin>>d;
            cout << "Calificacion del video" << endl;
            cin>>c;
            vid[conV]=Video(n,g,d,c);
            conV+=1;
        }  */
        
        
    }
    }
    else if (opcion == 2)
    {
        for(int i=0; i<conV; i++){
            cout << vid[i].getNombre() << "\n" << vid[i].getGenero() << "\n" << vid[i].getDuracion() << "\n" << vid[i].getCalificacion() << endl;
        }
    }
    else if (opcion == 3)
    {
        for(int i=0; i<conS; i++){
            cout << ser[i].getNombre() << endl;
            for(int l=0; l<conS; l++){
                ser[l].getInfoT();
            }
        }
    }
    else if (opcion == 4)
    {
        for(int i=0; i<conP; i++){
            cout << pel[i].getNombre() << "\n" << pel[i].getGenero() << "\n" << pel[i].getDuracion() << "\n" << pel[i].getCalificacion() << endl;
        }
    }
    else if (opcion == 5)
    {
    }
    else if (opcion == 0)
    {
        break;
    }
    
}
} 