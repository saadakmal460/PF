<<<<<<< HEAD
#include<iostream>
using namespace std;


main()
{
    string str1;
    string str2;


    cout << "Enter string 1: ";
    cin >> str1;

    cout << "Enter string 2: ";
    cin >> str2;

    int count1=0;
    int count2 = 0;
    int charCount = 0;


    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    for (int i = 0; i < count1; i++)
    {
        for (int j = 0; j < count2; j++)
        {
            if (str1[i] == str2[j])
            {
                charCount++;
                break;
            }
        }
        
    }

    cout << charCount -1;
    
    

    
    
=======
#include<iostream>
using namespace std;


main()
{
    string str1;
    string str2;


    cout << "Enter string 1: ";
    cin >> str1;

    cout << "Enter string 2: ";
    cin >> str2;

    int count1=0;
    int count2 = 0;
    int charCount = 0;


    while (str1[count1] != '\0')
    {
        count1++;
    }

    while (str2[count2] != '\0')
    {
        count2++;
    }

    for (int i = 0; i < count1; i++)
    {
        for (int j = 0; j < count2; j++)
        {
            if (str1[i] == str2[j])
            {
                charCount++;
                break;
            }
        }
        
    }

    cout << charCount -1;
    
    

    
    
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}