<<<<<<< HEAD
#include <iostream>
using namespace std;


main(){

 float vegetablePrice;
 float fruitPrice;
 int KgVegetable;
 int kgFruit;
 float vegetableCost;
 float fruitCost;
 float total;
 float pkr;
 float finalPrice; 

 pkr = 1.94;



  cout << "Enter vegetable price per Kilogram: ";
  cin >> vegetablePrice;
  cout << "Enter fruit price per Kilogram: ";
  cin >> fruitPrice;
  
  cout << "Enter total kilograms of vegetables: " ;
  cin >> KgVegetable;
  cout << "Enter total kilograms of fruit: ";
  cin >> kgFruit;

  cout << " ____________________________________________________________________________" <<endl;

  vegetableCost = vegetablePrice * KgVegetable;
  fruitCost = fruitPrice * kgFruit;
  total = vegetableCost + fruitCost;
  finalPrice = total * pkr;
   
  cout << "Total price of fruits and vegetables in PKR is: "<<finalPrice;




=======
#include <iostream>
using namespace std;


main(){

 float vegetablePrice;
 float fruitPrice;
 int KgVegetable;
 int kgFruit;
 float vegetableCost;
 float fruitCost;
 float total;
 float pkr;
 float finalPrice; 

 pkr = 1.94;



  cout << "Enter vegetable price per Kilogram: ";
  cin >> vegetablePrice;
  cout << "Enter fruit price per Kilogram: ";
  cin >> fruitPrice;
  
  cout << "Enter total kilograms of vegetables: " ;
  cin >> KgVegetable;
  cout << "Enter total kilograms of fruit: ";
  cin >> kgFruit;

  cout << " ____________________________________________________________________________" <<endl;

  vegetableCost = vegetablePrice * KgVegetable;
  fruitCost = fruitPrice * kgFruit;
  total = vegetableCost + fruitCost;
  finalPrice = total * pkr;
   
  cout << "Total price of fruits and vegetables in PKR is: "<<finalPrice;




>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}