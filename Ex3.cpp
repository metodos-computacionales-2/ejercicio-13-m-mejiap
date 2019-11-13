#include <iostream>
#include <cmath>
using namespace std;

int fib_rec(int n1);
int fib_for(int n2);
int n;

int main(){
    cout<<"Ingrese número: ";
    cin>>n;
    cout<<"Serie de Fibonacci recursiva: "<<fib_rec(n)<<endl;
    cout<<"Serie de Fibonacci con for: "<<fib_for(n)<<endl;
    
    return 0;
}

int fib_rec(int n1){
    int n_fibonacci = 0;
    
    if (n1 == 0){
        n_fibonacci = 0;}
    else if (n1 == 1){
        n_fibonacci = 1;}
    else if (n1 >= 2){
        n_fibonacci = fib_rec(n1-1) + fib_rec(n1-2);}
    
    return n_fibonacci;
}

int fib_for(int n2){
    int n_fibonacci = 0;
    int a = 1;
    int b = 0;
    if(n2 == 0){
        n_fibonacci = 0;}
    else{
        for(int i = 0; i < n2; i++){
            n_fibonacci = a+b;
            a = b; 
            b = n_fibonacci;
        }
    }
    return n_fibonacci;
}