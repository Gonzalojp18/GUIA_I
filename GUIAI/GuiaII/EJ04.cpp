#include <iostream>
using namespace std;

int main(){

    int firstNumber;
    int secondNumber;
    int step;

    cout<<"enter the first number";
    cin>>firstNumber;
    cout<<"enter the second number";
    cin>>secondNumber;

    if(firstNumber && secondNumber <= 0){
        step = firstNumber - secondNumber;
    }else{
        step = secondNumber - firstNumber;
    }

    cout<<"the difference between " << firstNumber << "and " << secondNumber << "es " << step << endl;

}