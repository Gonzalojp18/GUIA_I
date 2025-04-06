#include <iostream>
using namespace std;


int main(){

	int billeteK;
	int billeteQ;
	int billeteD;
	int billeteC;
	int mil = 1000;
	int quinientos = 500;
	int doscientos = 200;
	int cien = 100;
	int resto;
	int cash;

	cout << "How much cash do you need";
	cin >> cash;

	billeteK = float(cash / mil);
	resto = float(cash % mil);

	billeteQ = float(resto / quinientos);
	resto = float(resto % quinientos);

	billeteD = float(resto / doscientos);
	resto = float(resto % doscientos);

	billeteC = float(resto / cien);
	resto = float(resto % cien);



	cout << "getting you " << billeteK << " billetes de " << mil << endl;
	cout << "getting you " << billeteQ << " billetes de " << quinientos << endl;
	cout << "getting you " << billeteD << " billetes de " << doscientos << endl;
	cout << "getting you " << billeteC << " billetes de " << cien << endl;




return 0;

}
