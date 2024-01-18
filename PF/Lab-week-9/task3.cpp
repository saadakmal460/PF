<<<<<<< HEAD
#include<iostream>
using namespace std;





main()
{
    int n , sum = 0, avg = 0;
    cout << "Enter number of integer: ";
    cin >> n;


    int x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];

        sum = sum + x[i];

    }

    avg = sum/n;

    cout << "Sum of integers is : " << sum <<endl;
    cout << "Average of integers is : " << avg <<endl;



     

=======
#include<iostream>
using namespace std;





main()
{
    int n , sum = 0, avg = 0;
    cout << "Enter number of integer: ";
    cin >> n;


    int x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];

        sum = sum + x[i];

    }

    avg = sum/n;

    cout << "Sum of integers is : " << sum <<endl;
    cout << "Average of integers is : " << avg <<endl;



     

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}