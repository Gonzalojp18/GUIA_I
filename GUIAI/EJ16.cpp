#include <iostream>
using namespace std;


int main(){

        int bottle;
        int pill = 75;
        int betamol = 45;
        int micilina = 2;
        int acidoSinitico = 7;

        cout << "Enter how many bottle do yo need";
        cin >> bottle;

        // get the qt of each element p/bottle
        int totalBetamol = pill * betamol;
        int totalMicilina = pill * micilina;
        int totalAcidoSenitico = pill * acidoSinitico;

        //get the qt of each element for the total of bottle
        int globalBetamol = totalBetamol * bottle;
        int globalMicilina = totalMicilina * bottle;
        int globalAcidoSenitico = totalAcidoSenitico * bottle;

        //show the total of mg necessary to complete all bottle
        cout << "Total of betamol necessary to complete all bottle: " << globalBetamol << endl;
        cout << "Total of micilina necessary to complete all bottle: " << globalMicilina << endl;
        cout << "Total of acido senitico necessary to complete all bottle: " << globalAcidoSenitico << endl;




return 0;

}
