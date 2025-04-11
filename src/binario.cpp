#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Persona{
    char nombre[50];
    int edad;
};

int main(int argc, char const *argv[])
{

//ABRIR ARCHIVO

ofstream archivo("binario.bin", ios::binary);
if (!archivo.is_open()){
    cerr << "ERROR AL ABRIR." << endl;
    return 1;
}

cout << "ESCRIBIENDO EN EL ARCHIVO..." << endl;
Persona p1 = {"JUAN",30};
Persona p2 = {"MARIA",25};
Persona p3 = {"PEDRO",40};


archivo.write(reinterpret_cast<char*>(&p1), sizeof(Persona));
archivo.write(reinterpret_cast<char*>(&p2), sizeof(Persona));
archivo.write(reinterpret_cast<char*>(&p3), sizeof(Persona));

archivo.close();

//PARA LECTURA
ifstream archivolectura("binario.bin", ios::binary);
    if (!archivolectura.is_open()){
        cerr << "ERROR AL ABRIR." << endl;
        return 1;
    }
    cout << "LEYENDO EL ARCHIVO..." << endl;
    Persona p;
    string linea;
    while(archivolectura.read(reinterpret_cast<char*>(&p),sizeof(Persona)))
    {
        cout << "NOMBRE: " << p.nombre << ", EDAD: " << p.edad << endl;
    }

    return 0;

};