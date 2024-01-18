<<<<<<< HEAD
#include <iostream>
#include <windows.h>

using namespace std;


void printName();
void gotoxy(int , int);







main(){
 
 system("cls");
 printName();


}




void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printName(){

 gotoxy(90,25);
 cout << "   ########    #######     #######    ######                     " <<endl;
gotoxy(90,26);
 cout << "  ##          ##     ##   ##     ##   ##    ##                   " <<endl;
gotoxy(90,27);
 cout << "   ##         #########   #########   ##     ##                  " <<endl;
gotoxy(90,28);
 cout << "     ##       ##     ##   ##     ##   ##     ##                  " <<endl;
gotoxy(90,29);
 cout << "       ##     ##     ##   ##     ##   ##    ##                   " <<endl;
gotoxy(90,30); 
cout << "  #######     ##     ##   ##     ##   ######                      " <<endl;



}

=======
#include <iostream>
#include <windows.h>

using namespace std;


void printName();
void gotoxy(int , int);







main(){
 
 system("cls");
 printName();


}




void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printName(){

 gotoxy(90,25);
 cout << "   ########    #######     #######    ######                     " <<endl;
gotoxy(90,26);
 cout << "  ##          ##     ##   ##     ##   ##    ##                   " <<endl;
gotoxy(90,27);
 cout << "   ##         #########   #########   ##     ##                  " <<endl;
gotoxy(90,28);
 cout << "     ##       ##     ##   ##     ##   ##     ##                  " <<endl;
gotoxy(90,29);
 cout << "       ##     ##     ##   ##     ##   ##    ##                   " <<endl;
gotoxy(90,30); 
cout << "  #######     ##     ##   ##     ##   ######                      " <<endl;



}

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
