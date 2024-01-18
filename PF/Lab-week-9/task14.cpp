<<<<<<< HEAD
#include<iostream>
using namespace std;







main()
{
    int n ; 
    float sum = 0;

    cout << "Enter number of resistors: ";
    cin >> n;

    float res[n];



    for (int i = 0; i <n; i++)
    {
        cout << "Enter element: ";
        cin >> res[i];

        sum = sum + res[i];
    
    }

    cout << "Total resistence is: " << sum << " ohms" <<endl;
    
   
}
=======
#include<iostream>
using namespace std;







main()
{
    int n ; 
    float sum = 0;

    cout << "Enter number of resistors: ";
    cin >> n;

    float res[n];



    for (int i = 0; i <n; i++)
    {
        cout << "Enter element: ";
        cin >> res[i];

        sum = sum + res[i];
    
    }

    cout << "Total resistence is: " << sum << " ohms" <<endl;
    
   
}
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
