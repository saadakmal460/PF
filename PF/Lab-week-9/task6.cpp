<<<<<<< HEAD
#include<iostream>
using namespace std;






main()
{
    int size , n , product;

    cout << "Enter size of array: ";
    cin >> size;

    int x[size];


    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];
    }

    cout << "Enter number: ";
    cin >> n;
    

    for (int i = 0; i < size; i++)
    {
        product = x[i] * n;

        cout << product << " ";
    }
    
    
=======
#include<iostream>
using namespace std;






main()
{
    int size , n , product;

    cout << "Enter size of array: ";
    cin >> size;

    int x[size];


    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];
    }

    cout << "Enter number: ";
    cin >> n;
    

    for (int i = 0; i < size; i++)
    {
        product = x[i] * n;

        cout << product << " ";
    }
    
    
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}