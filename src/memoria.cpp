#include <iostream>
#include <string>
#include <thread>
using namespace std;

int main(){
    int a=74;
    int b=185;
    int *direccion=&a;

    cout<<"int:"<<sizeof(int)<<endl;
    cout<<"bool:"<<sizeof(bool)<<endl;
    cout<<"char:"<<sizeof(char)<<endl;
    cout<<"float:"<<sizeof(float)<<endl;
    cout<<"double:"<<sizeof(double)<<endl;

    cout<<"a:"<<&a<<endl;
    cout<<"b:"<<&b<<endl;

    cout<<"direccion:"<<direccion<<endl;
    cout<<"direccion:"<<*direccion<<endl;

    cout<<"direccion:"<<sizeof(direccion)<<endl;

    return 0;

};