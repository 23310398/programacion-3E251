#include <iostream>
#include <string>
#include <list>
using namespace std;

class Persona{
private:
    string nombre;
    string edad;

public:
    Persona(string nombre, int edad){
        this ->nombre = nombre;
        this ->edad = edad;
    }

};

int main(int argc, char const *argv[]){

    list<string> nombres;
    nombres.push_back("Pablo");
    nombres.push_back("Juan");
    nombres.push_back("Maria");
    nombres.push_back("Jose");

    list<int> edades;
    edades.push_back(15);
    edades.push_back(19);
    edades.push_back(20);
    edades.push_back(8);

    list<Persona> personas;
    for (auto it = nombres.begin(); it != nombres.end(); it++)
    {
        personas.push_back(Persona
            (
                *it,
                5
            ));
    }
    



    return 0;
}

