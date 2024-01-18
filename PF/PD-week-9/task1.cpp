<<<<<<< HEAD
#include<iostream>
using namespace std;





main()
{
    int quantity , total;
    string name;

    cout << "Enter name of fruit: ";
    cin >> name;

    cout << "Enter quantity of fruit: ";
    cin >> quantity;

    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60 , 70 , 40 , 30};


    for (int i = 0; i < 4; i++)
    {
        if (fruits[i] == name)
        {
            total = price[i]*quantity;
        }
        
    }
    cout << total;
    

 
    













=======
#include<iostream>
using namespace std;





main()
{
    int quantity , total;
    string name;

    cout << "Enter name of fruit: ";
    cin >> name;

    cout << "Enter quantity of fruit: ";
    cin >> quantity;

    string fruits[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60 , 70 , 40 , 30};


    for (int i = 0; i < 4; i++)
    {
        if (fruits[i] == name)
        {
            total = price[i]*quantity;
        }
        
    }
    cout << total;
    

 
    













>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}