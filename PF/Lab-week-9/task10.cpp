<<<<<<< HEAD
#include<iostream>
using namespace std;





main()
{


    string word;
    
    cout << "Enter name: ";
    getline(cin , word);


    int count = 0;


    while (word[count] != '\0')
    {
        count++;
    }


    for (int i = count; i >= 0; i--)
    {

        cout << word[i] << " ";

    }
    



=======
#include<iostream>
using namespace std;





main()
{


    string word;
    
    cout << "Enter name: ";
    getline(cin , word);


    int count = 0;


    while (word[count] != '\0')
    {
        count++;
    }


    for (int i = count; i >= 0; i--)
    {

        cout << word[i] << " ";

    }
    



>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}