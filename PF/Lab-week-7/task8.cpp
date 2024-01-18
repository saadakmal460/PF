<<<<<<< HEAD
#include <iostream>
using namespace std;



void multiplication(int number);


main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    multiplication(number);



}





void multiplication(int number)
{
    int result;
    for (int i = 1; i <= 10; i++)
    {
        
        result = number * i;
        cout << number << " * " << i << " = " << result <<endl;
        
    }

     
    

=======
#include <iostream>
using namespace std;



void multiplication(int number);


main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    multiplication(number);



}





void multiplication(int number)
{
    int result;
    for (int i = 1; i <= 10; i++)
    {
        
        result = number * i;
        cout << number << " * " << i << " = " << result <<endl;
        
    }

     
    

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}