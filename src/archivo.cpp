#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream archivo("archivo.txt");
    if (!archivo.is_open()){
        cerr << "ERROR AL ABRIR." << endl;
        return 1;
    }
    cout << "ESCRIBIENDO EN EL ARCHIVO..." << endl;
    archivo <<"HOLA, MUNDO." << endl;
    archivo <<"LINEA 2." << endl;
    archivo <<"LINEA 3." << endl;
    archivo <<"LINEA 4" << endl;
    archivo <<"LINEA 5." << endl;
    archivo <<"LINEA 6" << endl;

    //ABRIR ARCHIVO PARA LECTURA
    ifstream archivolectura("archivo.txt");
    if (!archivolectura.is_open()){
        cerr << "ERROR AL ABRIR." << endl;
        return 1;
    }
    cout << "LEYENDO EL ARCHIVO..." << endl;
    string linea;
    while(getline(archivolectura, linea)){
        cout << linea << endl;
    }

    //CERRAR ARCHIVO
    archivo.close();

    return 0;
}