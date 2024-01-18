<<<<<<< HEAD
#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x , int y);
void printA();
void printW();
void printI();
void printS();

main(){

 system("cls");
 gotoxy(0 , 3 );
 printA();
 gotoxy(0,10 );
 printW();
 gotoxy(0 , 17 );
 printA();
 gotoxy(0 , 24 );
 printI();
 gotoxy(0 , 33 );
 printS();
}














void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printA(){

 

 cout << "    ######   "  <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##########  " <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##      ##  " <<endl;

}





void printW(){

cout << "  ##        ##" <<endl;
cout << "  ##    #   ##  " <<endl;
cout << "  ##   ###  ##   " <<endl;
cout << "  ##  ####  ##   " <<endl;
cout << "   ###   ####     " <<endl;
}



void printI(){


 cout << "  ########### " <<endl;
 cout << "       #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "   ########### " <<endl;



}

void printS(){

 cout << "   ######## " <<endl;
 cout << "  ##         " <<endl;
 cout << "   ##        " <<endl;
 cout << "     ##       " <<endl;
 cout << "       ##     " <<endl;
 cout << "  #######     " <<endl;

}      









=======
#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy(int x , int y);
void printA();
void printW();
void printI();
void printS();

main(){

 system("cls");
 gotoxy(0 , 3 );
 printA();
 gotoxy(0,10 );
 printW();
 gotoxy(0 , 17 );
 printA();
 gotoxy(0 , 24 );
 printI();
 gotoxy(0 , 33 );
 printS();
}














void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printA(){

 

 cout << "    ######   "  <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##########  " <<endl;
 cout << "  ##      ##  " <<endl;
 cout << "  ##      ##  " <<endl;

}





void printW(){

cout << "  ##        ##" <<endl;
cout << "  ##    #   ##  " <<endl;
cout << "  ##   ###  ##   " <<endl;
cout << "  ##  ####  ##   " <<endl;
cout << "   ###   ####     " <<endl;
}



void printI(){


 cout << "  ########### " <<endl;
 cout << "       #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "        #      " <<endl;
cout << "   ########### " <<endl;



}

void printS(){

 cout << "   ######## " <<endl;
 cout << "  ##         " <<endl;
 cout << "   ##        " <<endl;
 cout << "     ##       " <<endl;
 cout << "       ##     " <<endl;
 cout << "  #######     " <<endl;

}      









>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
