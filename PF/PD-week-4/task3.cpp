<<<<<<< HEAD
#include <iostream>
#include <windows.h>
using namespace std;


void maze();
void gotoxy(int , int );
void move(int x , int y);



main(){

 system("cls");
 maze();
 int x = 45;
 int y = 15;
 move(x,y);
 

}




void maze()
{

cout << "                        #################################################################################################    " <<endl;
cout << "                        || --  --------------------------------------------------------------------------------------- ||    " <<endl;
cout << "                        || --  %%%%%%%%%%%%%%%%%%%%         ---       %%%%%%%%%%%%%%%%%%%%       |%|--    %%%%%%%% --- ||    " <<endl;                                                                                                                                 
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|--         |%|     ||    " <<endl;                                                           
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|           |%|     ||    " <<endl;                                                           
cout << "                        || --         %%%%%%%%%%%%% - -  |%|---       %%%%%%%%%%%%%%%%%%%%                 %%%%%%%% -  ||    " <<endl;                                                                                             
cout << "                        || --         |%|           - -  |%|---        ------ - - - - - -      |%|--                -  ||    " <<endl;                                                                                                               
cout << "                        || --         %%%%%%%%%%%%%%- -  |%|---       %%%%%%%%%%%%%%%%%%%      |%|--           %%%% -  ||    " <<endl;
cout << "                        || --                    |%| -                |%| ------               |%|-             |%|-   ||    " <<endl;
cout << "                        || --      - - --  - -  -|%| -                |%| ------- |%|           -               |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|%%%%|%| -  |%| - |%|                ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -  |%|- - %%%%%%%%%%%%%%% ------- |%|             -|%|-                ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -                  ---|%|  %%%%%%%%              - |%|-                ||    " <<endl;
cout << "                        || --|%|                -                  ---|%|                    |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|   %%%%%%%%%%%%%%%           ---|%|%%%%%%%%%%%%%%            |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;
cout << "                        || ---------------------------  -- -------------------------------   |%| ------------------    ||    " <<endl;
cout << "                        ||    --------------------------------  ----------------                  -----------------    ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--       %%%%%%%%%  -----------|%|             |%| --|%|--               ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--      --- |%|            %%%%%%%             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|               G    - - - |%|                |%|             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|    %%%%%%%%%%%%%%%%%       - - - |%|%%%%%%%%%%%             |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;                                                                                                                                           
cout << "                        || ---------------------------------------------------------------   |%| ------------------    ||    " <<endl;                                                                                                                                 
cout << "                        ||     -----------------------------------------------------------          ---------------    ||    " <<endl;
cout << "                        #################################################################################################    " <<endl;  


}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void move(int x , int y){

  gotoxy(x-1 , y);
  cout << " " ;
  gotoxy(x,y);
  cout << "p" ;
  Sleep(200);
}
 
=======
#include <iostream>
#include <windows.h>
using namespace std;


void maze();
void gotoxy(int , int );
void move(int x , int y);



main(){

 system("cls");
 maze();
 int x = 45;
 int y = 15;
 move(x,y);
 

}




void maze()
{

cout << "                        #################################################################################################    " <<endl;
cout << "                        || --  --------------------------------------------------------------------------------------- ||    " <<endl;
cout << "                        || --  %%%%%%%%%%%%%%%%%%%%         ---       %%%%%%%%%%%%%%%%%%%%       |%|--    %%%%%%%% --- ||    " <<endl;                                                                                                                                 
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|--         |%|     ||    " <<endl;                                                           
cout << "                        || --         |%|       |%|      |%|---       |%|              |%|       |%|           |%|     ||    " <<endl;                                                           
cout << "                        || --         %%%%%%%%%%%%% - -  |%|---       %%%%%%%%%%%%%%%%%%%%                 %%%%%%%% -  ||    " <<endl;                                                                                             
cout << "                        || --         |%|           - -  |%|---        ------ - - - - - -      |%|--                -  ||    " <<endl;                                                                                                               
cout << "                        || --         %%%%%%%%%%%%%%- -  |%|---       %%%%%%%%%%%%%%%%%%%      |%|--           %%%% -  ||    " <<endl;
cout << "                        || --                    |%| -                |%| ------               |%|-             |%|-   ||    " <<endl;
cout << "                        || --      - - --  - -  -|%| -                |%| ------- |%|           -               |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|%%%%|%| -  |%| - |%|                ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -  |%|- - %%%%%%%%%%%%%%% ------- |%|             -|%|-                ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -                  ---|%|  %%%%%%%%              - |%|-                ||    " <<endl;
cout << "                        || --|%|                -                  ---|%|                    |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|   %%%%%%%%%%%%%%%           ---|%|%%%%%%%%%%%%%%            |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;
cout << "                        || ---------------------------  -- -------------------------------   |%| ------------------    ||    " <<endl;
cout << "                        ||    --------------------------------  ----------------                  -----------------    ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--       %%%%%%%%%  -----------|%|             |%| --|%|--               ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--      --- |%|            %%%%%%%             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|               G    - - - |%|                |%|             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|    %%%%%%%%%%%%%%%%%       - - - |%|%%%%%%%%%%%             |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;                                                                                                                                           
cout << "                        || ---------------------------------------------------------------   |%| ------------------    ||    " <<endl;                                                                                                                                 
cout << "                        ||     -----------------------------------------------------------          ---------------    ||    " <<endl;
cout << "                        #################################################################################################    " <<endl;  


}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void move(int x , int y){

  gotoxy(x-1 , y);
  cout << " " ;
  gotoxy(x,y);
  cout << "p" ;
  Sleep(200);
}
 
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
