#include <iostream>

using namespace std;

	int main(){
		float price;
		int pricePerUni;
		int egg;
		int docena;
		int unidad;

	cout << "how many egg do you have";
	cin >>egg;

	docena = egg / 12;
	unidad = egg % 12;

	price = docena *  1000;
	pricePerUni = unidad * 120;

	cout << "Have you sold: " << docena << "Dozens of egg and"  << unidad;
	cout << "your should paid: " << price << " and: " << pricePerUni;






	return 0;
}
