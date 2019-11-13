#include <iostream>
#include <cmath>
using namespace std;

int getMax(int n1, int n2);
double getMax(double n3, double n4);
int n01;
int n02;
double n03;
double n04;

int main(){
    cout<<"Ingrese números enteros: "<<endl;
    cin>>n01;
    cin>>n02;
    cout<<"Ingrese números de tipo double (decimales): "<<endl;
    cin>>n03;
    cin>>n04;
    cout<<"El máximo entre los números enteros es: "<<getMax(n01, n02)<<endl;
    cout<<"El máximo entre los números decimales es: "<<getMax(n03, n04)<<endl;
    
    return 0;
}

int getMax(int n1, int n2){
    if(n1>n2){
        return n1;}
    else{
        return n2;}
}

double getMax(double n3, double n4){
    if(n3>n4){
        return n3;}
    else{
        return n4;}
}

//Al nombrar las dos funciones como "getMax", se tiene una función sobrecargada que identifica por sí misma cuál es el tipo de variable que ingresa como parámetro y, acorde a ello, ejecuta una acción correspondiente. El código corre con normalidad.