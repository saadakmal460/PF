<<<<<<< HEAD
#include<iostream>
using namespace std;




main()
{
    int size;

    cout << "Enter number: ";
    cin >> size;

    int x[size];

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter element: ";
        cin >> x[i];

    }


    for (int i = size-1; i >= 0 ; i--)
    {

        cout << x[i] << " ";
    
    }
    
    

=======
#include<iostream>
using namespace std;




main()
{
    int size;

    cout << "Enter number: ";
    cin >> size;

    int x[size];

    for (int i = 0; i < size; i++)
    {
        
        cout << "Enter element: ";
        cin >> x[i];

    }


    for (int i = size-1; i >= 0 ; i--)
    {

        cout << x[i] << " ";
    
    }
    
    

>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}