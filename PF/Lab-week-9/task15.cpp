<<<<<<< HEAD
#include<iostream>
using namespace std;





main()
{
  int num =0;

  cout << "Enter size of array 2: ";
  cin >> num;

  int y[2];
  cout << "Enter 2 elements: ";
  cin >> y[0] >> y[1];

  int x[num];
  
 
  
  for (int i = 0; i <num; i++)
  {
    cout << "Enter elements: ";
    cin >> x[i];
   

  }

  for (int i = 0; i <num; i++)
  {
    if (i == 0)
    {
      cout << y[0];
      cout << " ";
    }
    cout << x[i]; 
  }
  cout << " ";
  cout << y[1];
  






  
  
  

  


  
=======
#include<iostream>
using namespace std;





main()
{
  int num =0;

  cout << "Enter size of array 2: ";
  cin >> num;

  int y[2];
  cout << "Enter 2 elements: ";
  cin >> y[0] >> y[1];

  int x[num];
  
 
  
  for (int i = 0; i <num; i++)
  {
    cout << "Enter elements: ";
    cin >> x[i];
   

  }

  for (int i = 0; i <num; i++)
  {
    if (i == 0)
    {
      cout << y[0];
      cout << " ";
    }
    cout << x[i]; 
  }
  cout << " ";
  cout << y[1];
  






  
  
  

  


  
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}