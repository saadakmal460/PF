<<<<<<< HEAD
#include <iostream>
using namespace std;



int digitSum(int number);



main()
{
    int number , result;

    cout << "Enter number: ";
    cin >> number;

    result = digitSum(number);
    cout << "Sum is : " << result;
}






int digitSum(int number)
{
    int sum = 0;
    int remainder;
    

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        
        sum = sum + remainder; 

    }

   
    return sum; 
     

=======
#include <iostream>
using namespace std;



int digitSum(int number);



main()
{
    int number , result;

    cout << "Enter number: ";
    cin >> number;

    result = digitSum(number);
    cout << "Sum is : " << result;
}






int digitSum(int number)
{
    int sum = 0;
    int remainder;
    

    while (number > 0)
    {
        remainder = number % 10;
        number = number / 10;
        
        sum = sum + remainder; 

    }

   
    return sum; 
     

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}