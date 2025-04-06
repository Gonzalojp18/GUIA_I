#include <iostream>
using namespace std;


int main(){

    float price;
    int percent;

    cout << "what'is the price";
    cin >>price;

    cout << "enter the total of discount";
    cin >>percent;

    float discount = (price * percent) / 100;
    float newprice = price - discount;

    cout << "Full price is: " << price << "with the" << percent << " the final price is: " << newprice;


return 0;

}
