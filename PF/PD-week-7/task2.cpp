<<<<<<< HEAD
#include<iostream>
using namespace std;




void triangle(int rows);


main()
{

    int rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    triangle(rows);


}



void triangle(int rows)
{
    for (int i = 1; i <=rows; i++)
    {
        for (int j = rows ; j >=i; j--)
        {
            cout << "*";
            
        }
        cout <<endl;
       
    }
=======
#include<iostream>
using namespace std;




void triangle(int rows);


main()
{

    int rows;
    cout <<"Enter number of rows: ";
    cin >> rows;
    triangle(rows);


}



void triangle(int rows)
{
    for (int i = 1; i <=rows; i++)
    {
        for (int j = rows ; j >=i; j--)
        {
            cout << "*";
            
        }
        cout <<endl;
       
    }
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}