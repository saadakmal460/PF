<<<<<<< HEAD
#include <iostream>
using namespace std;




main()
{

    int n  , n2;
    bool flag = false;
    
    cout << "Enter number: ";
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];
    }

    cout << "Enter number to find: ";
    cin >> n2;

    for (int i = 0; i < n ; i++)
    {
        if (n2 == x[i])
        {
            flag = true;
    
        }

        else
        {
            flag = false;
        }
        
    }


    if (flag == true)
    {
        cout  << "Number found";
    }
    else
    {
        cout << "Not found";
    }
    
    
    



=======
#include <iostream>
using namespace std;




main()
{

    int n  , n2;
    bool flag = false;
    
    cout << "Enter number: ";
    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> x[i];
    }

    cout << "Enter number to find: ";
    cin >> n2;

    for (int i = 0; i < n ; i++)
    {
        if (n2 == x[i])
        {
            flag = true;
    
        }

        else
        {
            flag = false;
        }
        
    }


    if (flag == true)
    {
        cout  << "Number found";
    }
    else
    {
        cout << "Not found";
    }
    
    
    



>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}