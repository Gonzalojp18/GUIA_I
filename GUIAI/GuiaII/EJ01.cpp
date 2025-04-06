/*
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/


#include <iostream>

using namespace std;

int main(){

    cout<<"Enter a number";
    int num;

    if(num < 0){
        cout<<"The number is negative";
    }
    if(num == 0){
        cout<<"The number is zero";
    }
    if(num > 0){
        cout<<"The number is positive";
        }


    return 0;
}

