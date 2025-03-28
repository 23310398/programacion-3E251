#include "Foco.hpp"
#include "Serie.hpp"
#include <iostream>
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
using namespace std;
using namespace ftxui;


int main(int argc, char const *argv[])
{
    auto Pantalla = Screen::Create(

        Dimension::Full(),
        Dimension::Full()
    );

    auto documento = vbox(
        spinner(21,1
        )
    );

    Render(Pantalla, documento);

    Pantalla.Print();







    // Foco foco1;
    // Foco foco2;
    
    // foco1.Encender();
    // foco2.Apagar();

    // foco1.Imprimir();
    // foco2.Imprimir();


    return 0;
};