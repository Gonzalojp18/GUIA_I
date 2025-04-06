#include <iostream>
using namespace std;

int main(){


    float ladoA;
    float ladoB;
    float ladoC;

    cout<< "enter the A length";
    cin>> ladoA;
    cout<< "enter the B length";
    cin>> ladoB;
    cout<< "enter the C length";
    cin>> ladoC;

    if(ladoA && ladoB == ladoC && ladoC && ladoA == ladoB){
        cout << "Es un triángulo equilátero" << endl;
    }else if(ladoA && ladoB != ladoC && ladoC && ladoB !=ladoA){
        cout << "Es un triángulo Escaleno" << endl;
    }else{
        cout << "Es un triángulo Isósceles" << endl;
    }




    return 0;

}