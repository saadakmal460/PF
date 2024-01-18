<<<<<<< HEAD
#include <iostream>
using namespace std;


void totalPrice(int redRoses , int whiteRoses , int tulip ,  float price);


main(){

 int redRoses;
 int whiteRoses;
 int tulip;
 float price;

 while(true){
 cout << "Enter number of red roses: ";
 cin >> redRoses;

 cout << "Enter number of white roses: ";
 cin >> whiteRoses;

 cout << "Enter number of tulips: ";
 cin >> tulip;

 totalPrice(redRoses ,  whiteRoses , tulip , price);
 
}
}



void totalPrice(int redRoses , int whiteRoses , int tulip ,  float price){

  price = (redRoses *  2.00) +( whiteRoses * 4.10) + (tulip * 2.5 );

  cout << "Original price: " <<price <<endl;

  float discount = price * 0.2;
  float discountedPrice = price - discount;

 


 if(price > 200){
	cout << "Price after discount: " <<discountedPrice <<endl;
}

if (price <200){

cout << "Final price: " <<price <<endl;


}






}

























 













=======
#include <iostream>
using namespace std;


void totalPrice(int redRoses , int whiteRoses , int tulip ,  float price);


main(){

 int redRoses;
 int whiteRoses;
 int tulip;
 float price;

 while(true){
 cout << "Enter number of red roses: ";
 cin >> redRoses;

 cout << "Enter number of white roses: ";
 cin >> whiteRoses;

 cout << "Enter number of tulips: ";
 cin >> tulip;

 totalPrice(redRoses ,  whiteRoses , tulip , price);
 
}
}



void totalPrice(int redRoses , int whiteRoses , int tulip ,  float price){

  price = (redRoses *  2.00) +( whiteRoses * 4.10) + (tulip * 2.5 );

  cout << "Original price: " <<price <<endl;

  float discount = price * 0.2;
  float discountedPrice = price - discount;

 


 if(price > 200){
	cout << "Price after discount: " <<discountedPrice <<endl;
}

if (price <200){

cout << "Final price: " <<price <<endl;


}






}

























 













>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
