#include <iostream>
using namespace std;

int main(){


	int minutes;
	int days;
	int hours;
	cout << "enter the minutes";
	cin>>minutes;


	days = float(minutes / 1440);
	minutes = float(minutes % 1440);
	hours = float(minutes / 60);
	minutes = float(minutes % 60);

	cout  << "you have: " << days <<  "days and: "  << hours << " hour with: " << minutes;




return 0;

}
