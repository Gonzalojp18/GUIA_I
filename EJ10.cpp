/*
Hacer un programa para ingresar por teclado una cantidad de horas y mostrar
por pantalla a cuantos días y horas equivalen.
Ejemplo  A:  si  se  ingresan  26  horas  el programa mostrará por pantalla que
equivalen a 1 día y 2 horas.
Ejemplo  B:  si  se  ingresan  72  horas  el  programa mostrará por pantalla que
equivalen a 3 días y 0 horas.
Ejemplo  C:  si  se  ingresan  20  horas  el programa mostrará por pantalla que
equivalen a 0 días y 20 horas*/

// horas/24
// horas%24

#include <iostream>
using namespace std;

int main(){

    int hours;
    int days;
    cout<<"Ingrese la cantidad de horas: ";
    cin>> hours;

    days = hours/24;
    hours = hours%24;

    cout<<"la cantidad de dias son: " << days << "y horas: " << hours << endl;


    return 0;
}