/*Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe el porcentaje de ventas para cada una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará e informará A: 50%, B: 12,50% y C: 37,50%.*/

#include <iostream>

using namespace std;

int main() {
    int sweet, milk, choco, sales;
    float sweetPercent, milkPercent, chocoPercent;


    cout << "How many sweet have you sold: ";
    cin >> sweet;
    cout << "How many milk have you sold: ";
    cin >> milk;
    cout << "How many choco have you sold: ";
    cin >> choco;


    sales = sweet + milk + choco;


    if (sales == 0) {
        cout << "Not sales were made. Cannot calculate percentages." << endl;
    } else {

        sweetPercent = (float(sweet) / sales) * 100;
        milkPercent = (float(milk) / sales) * 100;
        chocoPercent = (float(choco) / sales) * 100;

        cout << "\nThe total sales is: " << sales << endl;
        cout << "Total percentage of sweets sold: " << sweetPercent << "%" << endl;
        cout << "Total percentage of milk sold: " << milkPercent << "%" << endl;
        cout << "Total percentage of choco sold: " << chocoPercent << "%" << endl;
    }

    return 0;
}
