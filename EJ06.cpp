
/*Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/
#include <iostream>

using namespace std;

int main(){{

        int weekOne;
        int weekTwo;
        int weekThree;
        int weekFour;
        int average;
        int totalColleted;
        float percentOneWeek;
        float percentTwoWeek;
        float percentThreeWeek;
        float percentFourWeek;

        cout<<"how much is the amount collected this week";
        cin>>weekOne;
        cout<<"how much is the amount collected this week";
        cin>>weekTwo;
        cout<<"how much is the amount collected this week";
        cin>>weekThree;
        cout<<"how much is the amount collected this week";
        cin>>weekFour;

        //get the average
        average = (float(weekOne + weekTwo + weekThree + weekFour) / 4);
        //get the total of colleted
        totalColleted = weekOne + weekTwo + weekThree + weekFour;

        //get the percent of collected by week

        percentOneWeek = (float(weekOne) / totalColleted ) * 100;
        percentTwoWeek = (float(weekTwo) / totalColleted ) * 100;
        percentThreeWeek = (float(weekThree) / totalColleted ) * 100;
        percentFourWeek = (float(weekFour) / totalColleted ) * 100;

        //Show the average
        cout<<"\nThe average collected is: " << average << endl;
        //show the percent for each week
        cout<< "The percent of collect for the first Week is: " << percentOneWeek << "%" << endl;
        cout<<"The percent of collect for the second Week is: " << percentTwoWeek << "%" << endl;
        cout<<"The percent of collect for the third Week is: " << percentThreeWeek << "%" << endl;
        cout<<"The percent of collect for the third Week is: " << percentFourWeek << "%" << endl;




    return 0;
}}
