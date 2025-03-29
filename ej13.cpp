#include <iostream>
using namespace std;


int main(){

	int mil;
	int quinientos;
	// int doscientos;
	// int cien;
	int cash;
	// float resto;

	cout << "How many cash do you need";
	cin >>cash;

	mil = float(cash / 1000);
	quinientos = float(cash % 1000);

	cout << "son : " << "estos son cuantos?" << mil << "y si obviamente aca hay "<< quinientos << "porque es el resto de 2500 % 1000";



return 0;

}
