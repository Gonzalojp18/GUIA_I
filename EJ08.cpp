/*Hacer un programa para ingresar por teclado el importe de una venta sin el descuento y el importe de esa misma venta con el descuento aplicado y luego informar por pantalla el porcentaje de descuento aplicada a la misma.
Ejemplo A. Si el importe de la venta sin descuento es $1500 y el importe de la venta con descuento es $1200 entonces el porcentaje de descuento aplicado fue el 20%.
*/

#include <iostream>

using namespace std;

int main(){

    float price;
    float priceEnd;
    float discount;
    float priceWithDiscount;

    cout<<"Enter the full price of the article: ";
    cin>>price;
    cout<<"Enter the end price of the article: ";
    cin>>priceEnd;

    discount =  price - priceEnd;
    priceWithDiscount = float(discount / price) * 100;
    cout<<"\nThe discount is: "<<priceWithDiscount << "%";


    return 0;


}

