<<<<<<< HEAD
#include <iostream>
using namespace std;







main(){
system("cls");

 int totalMiutes , finalMinutes , finalHours;
 int minutes , hours;
 
while(true){
    cout << "Enter hours: " ;
    cin>> hours;
    
   cout << " Enter minutes: ";
   cin>> minutes;


    totalMiutes = (hours*60) + minutes + 15;
    finalMinutes =totalMiutes % 60;
    finalHours =  totalMiutes / 60;


if(finalHours==24){


finalHours=0;


}

cout <<finalHours<< ":" << finalMinutes << endl;




}

=======
#include <iostream>
using namespace std;







main(){
system("cls");

 int totalMiutes , finalMinutes , finalHours;
 int minutes , hours;
 
while(true){
    cout << "Enter hours: " ;
    cin>> hours;
    
   cout << " Enter minutes: ";
   cin>> minutes;


    totalMiutes = (hours*60) + minutes + 15;
    finalMinutes =totalMiutes % 60;
    finalHours =  totalMiutes / 60;


if(finalHours==24){


finalHours=0;


}

cout <<finalHours<< ":" << finalMinutes << endl;




}

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}