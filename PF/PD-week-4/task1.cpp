<<<<<<< HEAD
#include <iostream>
#include <windows.h>
using namespace std;





void gotoxy(int x , int y);


main(){


 system ("cls");
 cout << "Test";

 gotoxy(15,15);
 cout << "My name is Saad" ;









}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
=======
#include <iostream>
#include <windows.h>
using namespace std;





void gotoxy(int x , int y);


main(){


 system ("cls");
 cout << "Test";

 gotoxy(15,15);
 cout << "My name is Saad" ;









}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}