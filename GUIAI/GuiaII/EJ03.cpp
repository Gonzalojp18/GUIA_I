#include <iostream>
using namespace std;

int main(){

    int number;

    cout<< "Enter the first number";
    cin>>number;

    if(number % 2 != 0){
        cout<< "The number is odd ";
    }else{
        cout<< "The number is even";
    }

    return 0;

}