<<<<<<< HEAD
#include <iostream>
using namespace std;


void pricePakistan(int discount , int price , int discountedPrice);
void priceIreland(int discount , int price , int discountedPrice);
void priceIndia(int discount , int price , int discountedPrice);
void priceEngland(int discount , int price , int discountedPrice);
void priceCanada(int discount , int price , int discountedPrice);

main(){
 
 string name;
 int price , discount , discountedPrice;

while(true){
 cout << "Enter country name: ";
 cin >> name;
 cout << "Enter ticket price: ";
 cin >> price;

if(name == "pakistan"){
 pricePakistan(discount , price , discountedPrice);

 }


if(name == "ireland"){
 priceIreland(discount , price , discountedPrice);
 }

if(name == "india"){
 
 priceIndia(discount ,  price , discountedPrice);
}



if(name == "england"){

 priceEngland (discount , price ,discountedPrice);

}

if(name == "canada" ) {

 priceCanada( discount ,  price ,  discountedPrice);




}
}

}





void pricePakistan(int discount , int price , int discountedPrice){


  discount = price * 0.05;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



}



void priceIreland(int discount , int price , int discountedPrice){


  discount = price * 0.1;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



}

void priceIndia(int discount , int price , int discountedPrice){


  discount = price * 0.2;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



} 


void priceEngland(int discount , int price , int discountedPrice){


  discount = price * 0.3;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



} 

void priceCanada(int discount , int price , int discountedPrice){


  discount = price * 0.45;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



=======
#include <iostream>
using namespace std;


void pricePakistan(int discount , int price , int discountedPrice);
void priceIreland(int discount , int price , int discountedPrice);
void priceIndia(int discount , int price , int discountedPrice);
void priceEngland(int discount , int price , int discountedPrice);
void priceCanada(int discount , int price , int discountedPrice);

main(){
 
 string name;
 int price , discount , discountedPrice;

while(true){
 cout << "Enter country name: ";
 cin >> name;
 cout << "Enter ticket price: ";
 cin >> price;

if(name == "pakistan"){
 pricePakistan(discount , price , discountedPrice);

 }


if(name == "ireland"){
 priceIreland(discount , price , discountedPrice);
 }

if(name == "india"){
 
 priceIndia(discount ,  price , discountedPrice);
}



if(name == "england"){

 priceEngland (discount , price ,discountedPrice);

}

if(name == "canada" ) {

 priceCanada( discount ,  price ,  discountedPrice);




}
}

}





void pricePakistan(int discount , int price , int discountedPrice){


  discount = price * 0.05;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



}



void priceIreland(int discount , int price , int discountedPrice){


  discount = price * 0.1;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



}

void priceIndia(int discount , int price , int discountedPrice){


  discount = price * 0.2;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



} 


void priceEngland(int discount , int price , int discountedPrice){


  discount = price * 0.3;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



} 

void priceCanada(int discount , int price , int discountedPrice){


  discount = price * 0.45;
  discountedPrice = price - discount ;
  cout << "Final price of Ticket: " <<discountedPrice <<endl;



>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
} 