#include "Foco.hpp"

class Serie
{
private:
    Foco foquitos[10];
public:
    Serie() {}
    ~Serie() {}
    void EncenderTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Encender();
        }
        
    }
    void ApagarTodo(){
        
    }
    void EncenderCantidad(int cantidad){

    }
    void ApagarCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Apagar();
        }
        
    }
    void RecorrerDerecha(){

    }
    void RecorrerIzquierda(){

    }
    void AlternarEncendido(){

    }
    void imprimir(){
        for (auto &&foco : foquitos)
        {
            foco.Imprimir();
        }
        
    }
};