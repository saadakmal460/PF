<<<<<<< HEAD
#include <iostream>
using namespace std;

main(){


 int number;
 int rem;
 int divOne;
 int remTwo;
 int divTwo;
 int remThree;
 int remFour; 
 int sum;







 cout << "Enter four digit integer: " ;
 cin >> number;



 rem = number % 10;
 
 divOne = number / 10;
 remTwo = divOne % 10;
 
 divTwo = divOne / 10;
 remThree = divTwo % 10;  
 
 remFour = divTwo / 10;


 sum = rem + remTwo + remThree + remFour;

 cout << "Sum is: " <<sum;


=======
#include <iostream>
using namespace std;

main(){


 int number;
 int rem;
 int divOne;
 int remTwo;
 int divTwo;
 int remThree;
 int remFour; 
 int sum;







 cout << "Enter four digit integer: " ;
 cin >> number;



 rem = number % 10;
 
 divOne = number / 10;
 remTwo = divOne % 10;
 
 divTwo = divOne / 10;
 remThree = divTwo % 10;  
 
 remFour = divTwo / 10;


 sum = rem + remTwo + remThree + remFour;

 cout << "Sum is: " <<sum;


>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}