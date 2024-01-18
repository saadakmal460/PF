<<<<<<< HEAD
#include<iostream>
using namespace std;

main()
{
    int size , sw=0 , total;
    int timeColor;

    cout << "Enter size of array: ";
    cin >> size;

    string colors[size];

    cout << "Enter sequence of colors: ";

    for (int i = 0; i < size; i++)
    {
        cin >> colors[i];
    }

    timeColor = size*2;

    for (int i = 0; i < size; i++)
    {
        if (colors[i] == colors[i+1])
        {
            sw = 0;
        }
        else
        {
            sw = sw+1;
        }
        
        
    }
    total = (timeColor + sw) - 1;
    cout << total;
    


=======
#include<iostream>
using namespace std;

main()
{
    int size , sw=0 , total;
    int timeColor;

    cout << "Enter size of array: ";
    cin >> size;

    string colors[size];

    cout << "Enter sequence of colors: ";

    for (int i = 0; i < size; i++)
    {
        cin >> colors[i];
    }

    timeColor = size*2;

    for (int i = 0; i < size; i++)
    {
        if (colors[i] == colors[i+1])
        {
            sw = 0;
        }
        else
        {
            sw = sw+1;
        }
        
        
    }
    total = (timeColor + sw) - 1;
    cout << total;
    


>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}