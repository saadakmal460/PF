<<<<<<< HEAD
#include <iostream>
using namespace std;

main()
{
  int num;
  int n;
  int rem;
  bool flag = false;

  cout << "Enter size of array: ";
  cin >> num;

  int arr[num];

  for (int i = 0; i < num; i++)
  {

    cout << "Enter elements: ";
    cin >> arr[i];
  }

  for (int i = 0; i < num; i++)
  {

    n = arr[i];
    while (n > 0)
    {
      rem = n % 10;
      if (rem == 7)
      {
        flag = true;
        break;
      }

      n = n / 10;
    }
  }

  if (flag == true)
  {
    cout << "BOOM!";
  }
  else
  {
    cout << "Not 7";
  }
=======
#include <iostream>
using namespace std;

main()
{
  int num;
  int n;
  int rem;
  bool flag = false;

  cout << "Enter size of array: ";
  cin >> num;

  int arr[num];

  for (int i = 0; i < num; i++)
  {

    cout << "Enter elements: ";
    cin >> arr[i];
  }

  for (int i = 0; i < num; i++)
  {

    n = arr[i];
    while (n > 0)
    {
      rem = n % 10;
      if (rem == 7)
      {
        flag = true;
        break;
      }

      n = n / 10;
    }
  }

  if (flag == true)
  {
    cout << "BOOM!";
  }
  else
  {
    cout << "Not 7";
  }
>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}