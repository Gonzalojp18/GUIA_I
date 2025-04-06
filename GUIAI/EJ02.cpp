/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/

#include <iostream>

int main() {

    int hoursWorked;
    float hourlyPay;
    float wage;

    std::cout << "Enter your hours worked";
    std::cin>>hoursWorked;


    std::cout << "Enter your pay per hour";
    std::cin>>hourlyPay;

    wage = hoursWorked * hourlyPay;

    std::cout<< "The total salary to be received is: " << wage;






  return 0;
}
