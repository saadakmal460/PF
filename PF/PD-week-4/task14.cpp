<<<<<<< HEAD
#include <iostream>
using namespace std;



void printMenu();
void aggregate(string name , float matricMarks , float intertMarks , float ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);






main(){
		string name , nameStd1 ,nameStd2 ;
		float matricMarks , intertMarks , ecatMarks;
                int ecatMarksStd1 , ecatMarksStd2 ;
printMenu();

while(true){
cout << "Enter your name: " ;
cin >> name;

cout << "Enter your matric marks: " ;
cin >> matricMarks;

cout << "Enter inter marks: " ;
cin >>  intertMarks;


cout << "Enter Ecat marks: " ;
cin >> ecatMarks;




 aggregate( name ,  matricMarks ,  intertMarks , ecatMarks);
 compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);

}

}





void printMenu(){

cout << "              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%          "  <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %          "  <<endl;
cout << "              %                                                             %           "  <<endl;
cout << "              %                                                             %        " <<endl;
cout << "              %                 UNIVERSITY MANAGMENT SYSYTEM                %         " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%          "     <<endl;

}




void aggregate(string name , float matricMarks , float intertMarks , float ecatMarks){

  float matricWeigthage = (matricMarks/1100 * 100 * 0.3);
  float interWeigthage = (intertMarks/550 * 100 * 0.3);
  float ecatWeigthage = (ecatMarks/400 * 100 * 0.4);
  float aggregate = matricWeigthage + interWeigthage + ecatWeigthage; 


    cout << "Your aggregate is: " <<aggregate <<endl;
 



}


void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2){

 cout << "Enter student name: " ;
 cin >> nameStd1;

 cout << "Enter Ecat marks: " ;
 cin >> ecatMarksStd1;

 cout << "Enter student name: " ;
 cin >> nameStd2;

 cout << "Enter Ecat marks: " ;
 cin >> ecatMarksStd2;



if(ecatMarksStd1 > ecatMarksStd2){


 cout << nameStd1;
 cout << " will have Roll no 1" <<endl;
 cout << nameStd2;
 cout << " will have Roll no 2" <<endl;

}


if(ecatMarksStd1 < ecatMarksStd2){


 cout << nameStd2;
 cout << " will Have Roll no 1" <<endl;
 cout << nameStd1;
 cout << " will have Roll no 2" <<endl;

}






}







 









































































































































































































=======
#include <iostream>
using namespace std;



void printMenu();
void aggregate(string name , float matricMarks , float intertMarks , float ecatMarks);
void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2);






main(){
		string name , nameStd1 ,nameStd2 ;
		float matricMarks , intertMarks , ecatMarks;
                int ecatMarksStd1 , ecatMarksStd2 ;
printMenu();

while(true){
cout << "Enter your name: " ;
cin >> name;

cout << "Enter your matric marks: " ;
cin >> matricMarks;

cout << "Enter inter marks: " ;
cin >>  intertMarks;


cout << "Enter Ecat marks: " ;
cin >> ecatMarks;




 aggregate( name ,  matricMarks ,  intertMarks , ecatMarks);
 compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);

}

}





void printMenu(){

cout << "              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%          "  <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %          "  <<endl;
cout << "              %                                                             %           "  <<endl;
cout << "              %                                                             %        " <<endl;
cout << "              %                 UNIVERSITY MANAGMENT SYSYTEM                %         " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %                                                             %           " <<endl;
cout << "              %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%          "     <<endl;

}




void aggregate(string name , float matricMarks , float intertMarks , float ecatMarks){

  float matricWeigthage = (matricMarks/1100 * 100 * 0.3);
  float interWeigthage = (intertMarks/550 * 100 * 0.3);
  float ecatWeigthage = (ecatMarks/400 * 100 * 0.4);
  float aggregate = matricWeigthage + interWeigthage + ecatWeigthage; 


    cout << "Your aggregate is: " <<aggregate <<endl;
 



}


void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2){

 cout << "Enter student name: " ;
 cin >> nameStd1;

 cout << "Enter Ecat marks: " ;
 cin >> ecatMarksStd1;

 cout << "Enter student name: " ;
 cin >> nameStd2;

 cout << "Enter Ecat marks: " ;
 cin >> ecatMarksStd2;



if(ecatMarksStd1 > ecatMarksStd2){


 cout << nameStd1;
 cout << " will have Roll no 1" <<endl;
 cout << nameStd2;
 cout << " will have Roll no 2" <<endl;

}


if(ecatMarksStd1 < ecatMarksStd2){


 cout << nameStd2;
 cout << " will Have Roll no 1" <<endl;
 cout << nameStd1;
 cout << " will have Roll no 2" <<endl;

}






}







 









































































































































































































>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
