#include "Serie.hpp"
#include <iostream>
#include <string>
#include <thread>
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

    int fotograma = 0;
    //float hi = 5;
    //float t = fotograma
    //float g = 9.81
    //float hf = (g*t*t)/2

    string resetPosition;
    while(true) {
        auto documento = vbox(
            spinner(21,fotograma)
    );
    Render(Pantalla, documento);
    cout << resetPosition;
    Pantalla.Print();
    resetPosition = Pantalla.ResetPosition();
    fotograma++;

    std::this_thread::sleep_for(0.1s);
}

    // Foco foco1;
    // Foco foco2;
    
    // foco1.Encender();
    // foco2.Apagar();

    // foco1.Imprimir();
    // foco2.Imprimir();


    return 0;
};