/*Una concesionaria de autos paga a los vendedores un sueldo fijo de $5000 más $700 de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $7800.
*/

#include <iostream>

using namespace std;

int main(){

    float fixedSalary = 5000;
    float commission = 700;
    int cars;
    float wage;

    cout<<"enter how many cars have you sold";
    cin>>cars;

    if(cars != 4){
        wage = fixedSalary + (cars * commission);
        cout<<"Your total of wage is: " << wage;
    }else{
        wage = 7800;
        cout<<"You have an wage of: " << wage ;
    }


    return 0;
}