#include <iostream>
int addition(const int &a, int b)
{
    int r;
    r=a+b;
    a=r; //Se ha declarado a como una constante y, en esta línea, se está pidiendo modificar el valor de a. El código no compila debido a que se genera una instrucción ambigüa con respecto al valor de a. Se genera entonces, a partir de esta línea, un error del tipo: "error: assignment of read-only reference ‘a’".
    return r;
}

int main(void)
{
    int x,y,z;
    x=5;
    y=3;
    z=addition(x,y);
    std::cout<< "The result is " <<z<<"\n";
    std::cout<< "The value of x is " <<x<<"\n";
    return 0;
}