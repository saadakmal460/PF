<<<<<<< HEAD
#include<iostream>
using namespace std;





main()
{


    string word;
    char x;

    cout << "Enter name: ";
    getline(cin , word);


    int count = 0;
    int i = 0;

   
    while (word[count] != '\0')
    {
        if (word[count] == 'a' || word[count] == 'e' || word[count] == 'i' || word[count] == 'o' || word[count] == 'u')
        {
            i++;
        }
        count++;
    }

    cout << "The string containes " << i << " vowels";


=======
#include<iostream>
using namespace std;





main()
{


    string word;
    char x;

    cout << "Enter name: ";
    getline(cin , word);


    int count = 0;
    int i = 0;

   
    while (word[count] != '\0')
    {
        if (word[count] == 'a' || word[count] == 'e' || word[count] == 'i' || word[count] == 'o' || word[count] == 'u')
        {
            i++;
        }
        count++;
    }

    cout << "The string containes " << i << " vowels";


>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}