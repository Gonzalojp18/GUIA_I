/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/

#include <iostream>
using namespace std;

int main() {

    int hoursWorked;
    float hourlyPay;
    float wage;

    cout << "Enter your hours worked";
    cin>>hoursWorked;


    cout << "Enter your pay per hour";
    cin>>hourlyPay;

    wage = hoursWorked * hourlyPay;

    cout<< "The total salary to be received is: " << wage;






  return 0;
}
