/*
Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos totales y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

*/


#include <iostream>

using namespace std;

int main(){

    int totalSeats;
    int occupiedSeats;
    int emptySeats;
    float occupancyPercentage;
    float emptyPercentage;


    cout<<"Enter total seats";
    cin>>totalSeats;
    cout<<"Enter occupied seats";
    cin>>occupiedSeats;

    occupancyPercentage = (float(occupiedSeats) / totalSeats) * 100;
    emptyPercentage = (float(totalSeats - occupiedSeats) / totalSeats) * 100;
    emptySeats = totalSeats - occupiedSeats;
    cout<<"Occupied seats: "<<occupiedSeats<<endl;
    cout<<"Empty seats: "<<emptySeats<<endl;
    cout<<"Occupancy percentage: "<<occupancyPercentage<<endl;
    cout<<"Empty percentage: "<<emptyPercentage<<endl;







    return 0;
}
