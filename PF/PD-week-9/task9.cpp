<<<<<<< HEAD
#include <iostream>
using namespace std;






main()
{
    
    int pin [4];
    int count = 0;
    string input;
    bool flag = true;

    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter pin: ";
        cin >> input;

        if (input != "0" && input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8" && input != "9")
        {
            flag = false;
            break;
        }

        pin[i] = stoi(input);
    }



    if (flag == true)
    {
        
        
        for (int i = 0; i < 4; i++)
        {
            if ((pin[i] + count) <= 9)
            {
                cout << move[pin[i] + count] << " ";
                count++;
            }

            else if ((pin[i] + count) > 9) 
            {
                cout << move[((pin[i] + count) % 9) - 1] << " ";
                count++;
            }
        }
    }

    else if (flag == false)
    {
        cout << endl << "Invalid input" << endl;
    }





=======
#include <iostream>
using namespace std;






main()
{
    
    int pin [4];
    int count = 0;
    string input;
    bool flag = true;

    string move[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter pin: ";
        cin >> input;

        if (input != "0" && input != "1" && input != "2" && input != "3" && input != "4" && input != "5" && input != "6" && input != "7" && input != "8" && input != "9")
        {
            flag = false;
            break;
        }

        pin[i] = stoi(input);
    }



    if (flag == true)
    {
        
        
        for (int i = 0; i < 4; i++)
        {
            if ((pin[i] + count) <= 9)
            {
                cout << move[pin[i] + count] << " ";
                count++;
            }

            else if ((pin[i] + count) > 9) 
            {
                cout << move[((pin[i] + count) % 9) - 1] << " ";
                count++;
            }
        }
    }

    else if (flag == false)
    {
        cout << endl << "Invalid input" << endl;
    }





>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}