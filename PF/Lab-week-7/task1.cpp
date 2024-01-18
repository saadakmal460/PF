<<<<<<< HEAD
#include <iostream>
using namespace std;





main()
{
    int series;
    
    cout << "Enter nuber of series: ";
    cin >> series;

    int n1 = 0;
    int n2 = 1;
    int sum;

    cout << n1 << " , " << n2 ;

    for (int count = 0; count < series - 2; count++)
    {

        sum = n1 + n2;

        cout << " , " << sum;
        n1 = n2;
        n2 = sum;            
         
    }
   
    
=======
#include <iostream>
using namespace std;





main()
{
    int series;
    
    cout << "Enter nuber of series: ";
    cin >> series;

    int n1 = 0;
    int n2 = 1;
    int sum;

    cout << n1 << " , " << n2 ;

    for (int count = 0; count < series - 2; count++)
    {

        sum = n1 + n2;

        cout << " , " << sum;
        n1 = n2;
        n2 = sum;            
         
    }
   
    
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}