#include <iostream>
#include <fstream>


using namespace std;

class Lector{
private:
    string nombreFile;
    int NumVid;
public:
    void LeerDatos(string, int);
    string notebook[99][99];
    void CambiarDatos(int, int, int);
};