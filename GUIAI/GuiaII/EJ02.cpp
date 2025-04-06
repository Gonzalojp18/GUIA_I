#include <iostream>
using namespace std;

int main(){

    int firstNumber;
    int secondNumber;

    cout<< "Enter the first number";
    cin>>firstNumber;

    cout<< "Enter the second number";
    cin>>secondNumber;

    if(firstNumber % secondNumber != 0){
        cout<< "The first number is not divisible by the second number";
    }else{
        cout<< "The first number is divisible by the second number";
    }

    return 0;

}