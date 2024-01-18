<<<<<<< HEAD
#include <iostream>
using namespace std;

main(){

string name;
float matric;
float intermediate;
float ecat;
float aggregate;
float matricWeigthage;
float interWeigthage;
float ecatWeigthage;



cout << "Name: "; 
cin >> name;

cout << "Marks in matric out of 1100... ";
cin >> matric;

cout << "Marks in intermediate.... ";
cin >> intermediate;

cout << "Marks in ecat..... " ;
cin >> ecat;

matricWeigthage = (matric/1100 *100 *0.1);
interWeigthage = (intermediate/550 * 100 * 0.4);
ecatWeigthage = (ecat/400 * 100 * 0.5);



aggregate = matricWeigthage  + interWeigthage + ecatWeigthage;
cout << "Your aggregate is: " <<aggregate;

}
=======
#include <iostream>
using namespace std;

main(){

string name;
float matric;
float intermediate;
float ecat;
float aggregate;
float matricWeigthage;
float interWeigthage;
float ecatWeigthage;



cout << "Name: "; 
cin >> name;

cout << "Marks in matric out of 1100... ";
cin >> matric;

cout << "Marks in intermediate.... ";
cin >> intermediate;

cout << "Marks in ecat..... " ;
cin >> ecat;

matricWeigthage = (matric/1100 *100 *0.1);
interWeigthage = (intermediate/550 * 100 * 0.4);
ecatWeigthage = (ecat/400 * 100 * 0.5);



aggregate = matricWeigthage  + interWeigthage + ecatWeigthage;
cout << "Your aggregate is: " <<aggregate;

}
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
