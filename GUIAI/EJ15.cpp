#include <iostream>
using namespace std;


int main(){

        int temperatureMax;
        int temperatureMin;
        int AmplitudTermica;

        cout << "Enter the max temperature record today";
        cin >> temperatureMax;
        cout << "Enter the min temperature record today";
        cin >> temperatureMin;

        AmplitudTermica = temperatureMax - temperatureMin;

        cout << "The recurrent temperature of San Francisco is: "  << AmplitudTermica;


return 0;

}
