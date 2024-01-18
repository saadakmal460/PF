<<<<<<< HEAD
#include <iostream>
using namespace std;



int checkFrequency(int number , int digit);



main()
{
    int number , digit , result;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter digit: ";
    cin >> digit;

    result = checkFrequency(number ,digit);
    cout << result;

    

}










int checkFrequency(int number , int digit)
{
    int remainder;
    int counter = 0;

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        
        
        if (remainder == digit)
        {
            counter = counter + 1;
        }
        
    }

   return counter;
=======
#include <iostream>
using namespace std;



int checkFrequency(int number , int digit);



main()
{
    int number , digit , result;

    cout << "Enter number: ";
    cin >> number;

    cout << "Enter digit: ";
    cin >> digit;

    result = checkFrequency(number ,digit);
    cout << result;

    

}










int checkFrequency(int number , int digit)
{
    int remainder;
    int counter = 0;

    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        
        
        if (remainder == digit)
        {
            counter = counter + 1;
        }
        
    }

   return counter;
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}