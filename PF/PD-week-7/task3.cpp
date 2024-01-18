<<<<<<< HEAD
#include <iostream>
using namespace std;

void upper(int number);
void lower(int number);





int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    upper(rows);
    lower(rows);

}




void upper(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}




void lower(int number)
{
    for (int i=number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

=======
#include <iostream>
using namespace std;

void upper(int number);
void lower(int number);





int main()
{
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    upper(rows);
    lower(rows);

}




void upper(int number)
{
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}




void lower(int number)
{
    for (int i=number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}