<<<<<<< HEAD
#include <iostream>
using namespace std;



void amplify(int number);


main()
{
    int number;

    cout << "Enter number of series: ";
    cin >> number;

    amplify(number);

}



void amplify(int number)
{
    int result;

    for (int i = 1; i <=number; i++)
    {
        if(i%4!=0)
        {
        cout << i  << " , ";
        }
        if (i%4==0)
        {
           result = i*10;
           cout << result << " , ";
        }
 
    }
    
    
=======
#include <iostream>
using namespace std;



void amplify(int number);


main()
{
    int number;

    cout << "Enter number of series: ";
    cin >> number;

    amplify(number);

}



void amplify(int number)
{
    int result;

    for (int i = 1; i <=number; i++)
    {
        if(i%4!=0)
        {
        cout << i  << " , ";
        }
        if (i%4==0)
        {
           result = i*10;
           cout << result << " , ";
        }
 
    }
    
    
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}