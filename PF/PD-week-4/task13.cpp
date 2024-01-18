<<<<<<< HEAD
#include <iostream>
using namespace std;


void tomSleep(int minutes ,  int holidays);



main(){

 
 int holidays , minutes;
while(true){
 cout << "Enter number of holidays: ";
 cin >> holidays;

tomSleep(minutes ,holidays);
}


}






void tomSleep(int minutes ,int holidays){
int norm = 30000;
 int workingDays = 365 - holidays;
 
 minutes = (workingDays * 63) + (holidays * 127) ;
 int difference2 =norm - minutes;
 
 if(minutes < norm){

 cout << "Tom can sleep well." <<endl;
 cout << "Difference from the norm: " <<difference2;
 cout << " minutes less for play" <<endl;

}

 
if(minutes > norm){


 cout << "Tom can not sleep well." <<endl;
 cout << "Difference from the norm: " <<difference2;
 cout << " minutes for play" <<endl;

}


=======
#include <iostream>
using namespace std;


void tomSleep(int minutes ,  int holidays);



main(){

 
 int holidays , minutes;
while(true){
 cout << "Enter number of holidays: ";
 cin >> holidays;

tomSleep(minutes ,holidays);
}


}






void tomSleep(int minutes ,int holidays){
int norm = 30000;
 int workingDays = 365 - holidays;
 
 minutes = (workingDays * 63) + (holidays * 127) ;
 int difference2 =norm - minutes;
 
 if(minutes < norm){

 cout << "Tom can sleep well." <<endl;
 cout << "Difference from the norm: " <<difference2;
 cout << " minutes less for play" <<endl;

}

 
if(minutes > norm){


 cout << "Tom can not sleep well." <<endl;
 cout << "Difference from the norm: " <<difference2;
 cout << " minutes for play" <<endl;

}


>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}