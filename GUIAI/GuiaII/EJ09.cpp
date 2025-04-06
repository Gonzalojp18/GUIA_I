#include <iostream>
using namespace std;

int main(){


    int numberA;
    int numberB;
    int numberC;

    cout<<"Enter the number A";
    cin>>numberA;
    cout<<"Enter the number B";
    cin>>numberB;
    cout<<"Enter the number C";
    cin>>numberC;

    if((numberA > numberB && numberA > numberC) || (numberB > numberC && numberB < numberA)){

        cout << "el numero mayor es: " << numberA << endl;

    }else if(numberB > numberC || numberB > numberA){

        cout << "el numero mayor es: " << numberB <<endl;

    }else{

        cout << "el numero mayor es: " << numberC <<endl;
    }

    return 0;

}

// a y b > c = c es el menor de los tres
// a y b < c = c es el mayor de los tres
// a > b > c = a es el mayor de los tres
// a < b < c = a es el menor de los tres
