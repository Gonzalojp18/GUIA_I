#include <iostream>
using namespace std;

int main(){


    int total;
    float discount;
    float priceEnd;

    cout<< "Enter the totals of ticket";
    cin>>total;


    if(total >= 100 || total <= 500){
        discount = 0.90;
    }else if(total > 500){
        discount = 0.85;
    }else{
        discount = 0.95;
    }

    priceEnd = total * discount;
    discount = total - priceEnd;

    cout<< "The discount is "<<priceEnd<< "tenes un descuento del: " << discount << "%" << endl;



    return 0;

}