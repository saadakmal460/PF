<<<<<<< HEAD
#include <iostream>
#include <windows.h>
using namespace std;




void maze();
void gotoxy(int x , int y);
char getCharATXY(short int x , short int y);
void clear(int x , int y , char previous);
void printGhost(int x , int y);


main()
{
     int gx = 28;
     int gy = 1;
     
     int g2x =28;
     int g2y = 2;
     
     string direction = "right";
     string directionTwo = "up";
     
     char previousChar = ' ';
     char secondChar = ' ';
     
     system("cls");
     maze();
     printGhost(gx , gy);
     printGhost(g2x , g2y);
     while (true)
     {
        Sleep(100);

        if (direction == "right")
        {
            char nextLocation = getCharATXY(gx + 1 , gy);
            if (nextLocation == '|')
            {
                direction = "left";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx + 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }



        if (direction == "left")
        {
            char nextLocation = getCharATXY(gx - 1 , gy);
            if (nextLocation == '|')
            {
                direction = "right";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx - 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }


        if (directionTwo == "up")
        {
            char nextLocation = getCharATXY(g2x , g2y - 1);
            if (nextLocation == '#' || nextLocation == '|')
            {
                directionTwo = "down";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(g2x , g2y , secondChar);
                g2y = g2y - 1;
                
                secondChar = nextLocation;
                printGhost(g2x , g2y);
            }
                      
        }

        
        if (directionTwo == "down")
        {
            char nextLocation = getCharATXY(g2x , g2y + 1);
            if (nextLocation == '#' || nextLocation == '|')
            {
                directionTwo = "up";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(g2x , g2y , secondChar);
                g2y = g2y + 1;
                
                secondChar = nextLocation;
                printGhost(g2x , g2y);
            }
                      
        }
        

         
        }
     
     

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
cout << "                        || --|%|   |%|%%%%|%| -  |%| -  |%|               ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -|%| - - %%%%%%%%%%%%%%% -------  |%|             -|%|-                ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -                  ---|%|  %%%%%%%%              - |%|-                ||    " <<endl;
cout << "                        || --|%|                -                  ---|%|                    |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|   %%%%%%%%%%%%%%%           ---|%|%%%%%%%%%%%%%%            |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;
cout << "                        || ---------------------------  -- -------------------------------   |%| ------------------    ||    " <<endl;
cout << "                        ||    --------------------------------  ----------------                  -----------------    ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--       %%%%%%%%%  -----------|%|             |%| --|%|--               ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--      --- |%|            %%%%%%%             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|                    - - - |%|                |%|             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|    %%%%%%%%%%%%%%%%%       - - - |%|%%%%%%%%%%%             |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;                                                                                                                                           
cout << "                        || ---------------------------------------------------------------   |%| ------------------    ||    " <<endl;                                                                                                                                 
cout << "                        ||     -----------------------------------------------------------          ---------------    ||    " <<endl;
cout << "                        #################################################################################################    " <<endl;  


}



void clear(int x , int y , char previous)
{
    gotoxy(x , y);
    cout << previous;
}


void printGhost(int x , int y){

    gotoxy(x,y);
    cout << "G";
}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



char getCharATXY(short int x , short int y){

  CHAR_INFO ci;
  COORD xy = {0 , 0};
  SMALL_RECT rect ={x ,y ,x , y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufsize , xy , &rect) ? ci.Char.AsciiChar :' ';

}
=======
#include <iostream>
#include <windows.h>
using namespace std;




void maze();
void gotoxy(int x , int y);
char getCharATXY(short int x , short int y);
void clear(int x , int y , char previous);
void printGhost(int x , int y);


main()
{
     int gx = 28;
     int gy = 1;
     
     int g2x =28;
     int g2y = 2;
     
     string direction = "right";
     string directionTwo = "up";
     
     char previousChar = ' ';
     char secondChar = ' ';
     
     system("cls");
     maze();
     printGhost(gx , gy);
     printGhost(g2x , g2y);
     while (true)
     {
        Sleep(100);

        if (direction == "right")
        {
            char nextLocation = getCharATXY(gx + 1 , gy);
            if (nextLocation == '|')
            {
                direction = "left";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx + 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }



        if (direction == "left")
        {
            char nextLocation = getCharATXY(gx - 1 , gy);
            if (nextLocation == '|')
            {
                direction = "right";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(gx , gy , previousChar);
                gx = gx - 1;

                previousChar = nextLocation;
                printGhost(gx , gy);
            }            
        }


        if (directionTwo == "up")
        {
            char nextLocation = getCharATXY(g2x , g2y - 1);
            if (nextLocation == '#' || nextLocation == '|')
            {
                directionTwo = "down";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(g2x , g2y , secondChar);
                g2y = g2y - 1;
                
                secondChar = nextLocation;
                printGhost(g2x , g2y);
            }
                      
        }

        
        if (directionTwo == "down")
        {
            char nextLocation = getCharATXY(g2x , g2y + 1);
            if (nextLocation == '#' || nextLocation == '|')
            {
                directionTwo = "up";
            }

            else if (nextLocation == ' ' || nextLocation == '-')
            {
                clear(g2x , g2y , secondChar);
                g2y = g2y + 1;
                
                secondChar = nextLocation;
                printGhost(g2x , g2y);
            }
                      
        }
        

         
        }
     
     

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
cout << "                        || --|%|   |%|%%%%|%| -  |%| -  |%|               ------- |%|            --|%|          |%|-   ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -|%| - - %%%%%%%%%%%%%%% -------  |%|             -|%|-                ||    " <<endl;
cout << "                        || --|%|   |%|    |%| - -                  ---|%|  %%%%%%%%              - |%|-                ||    " <<endl;
cout << "                        || --|%|                -                  ---|%|                    |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|   %%%%%%%%%%%%%%%           ---|%|%%%%%%%%%%%%%%            |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;
cout << "                        || ---------------------------  -- -------------------------------   |%| ------------------    ||    " <<endl;
cout << "                        ||    --------------------------------  ----------------                  -----------------    ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--       %%%%%%%%%  -----------|%|             |%| --|%|--               ||    " <<endl;
cout << "                        || --|%|    |%|    |%|--      --- |%|            %%%%%%%             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|                    - - - |%|                |%|             |%| --|%|-                ||    " <<endl;
cout << "                        || --|%|    %%%%%%%%%%%%%%%%%       - - - |%|%%%%%%%%%%%             |%| --|%|%%%%%%%%%%%%%    ||    " <<endl;                                                                                                                                           
cout << "                        || ---------------------------------------------------------------   |%| ------------------    ||    " <<endl;                                                                                                                                 
cout << "                        ||     -----------------------------------------------------------          ---------------    ||    " <<endl;
cout << "                        #################################################################################################    " <<endl;  


}



void clear(int x , int y , char previous)
{
    gotoxy(x , y);
    cout << previous;
}


void printGhost(int x , int y){

    gotoxy(x,y);
    cout << "G";
}


void gotoxy(int x , int y){
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}



char getCharATXY(short int x , short int y){

  CHAR_INFO ci;
  COORD xy = {0 , 0};
  SMALL_RECT rect ={x ,y ,x , y};
  COORD coordBufsize;
  coordBufsize.X = 1;
  coordBufsize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufsize , xy , &rect) ? ci.Char.AsciiChar :' ';

}
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
