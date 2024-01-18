<<<<<<< HEAD
#include <iostream>
using namespace std;


main(){

 string movieName;
 float adultTicketPrice;
 float childtTicketPrice;
 float numberOfAdultTickets;
 float numberOfchildTickets;
 float percentage;
 float amountByAdult;
 float amountByChild;
 float total;
 float amountForDonations;
 float remainingAmount;


 cout << "Enter Movie name: " ;
 cin >> movieName;
 cout <<"Enter Adult ticket price: ";
 cin >> adultTicketPrice;
 cout << "Enter child ticket price: ";
 cin >> childtTicketPrice;
 cout << "Enter number of adult tickets sold: " ;
 cin >>  numberOfAdultTickets;
 cout << "Enter number of child tickets sold: " ; 
 cin >> numberOfchildTickets;
 cout << "Enter percentage to donate: ";
 cin >> percentage;
 cout << " _________________________________________________________________________ " <<endl;
   
 amountByAdult = adultTicketPrice * numberOfAdultTickets;
 amountByChild = childtTicketPrice * numberOfchildTickets;
 total = amountByChild + amountByAdult;


 amountForDonations = total * (percentage/100);
 remainingAmount = total - amountForDonations;

 cout << "Total amount generated: " <<total <<endl;
 cout << "Amount for donation: " <<amountForDonations <<endl;
 cout << "Amount after donation: " <<remainingAmount <<endl;
 
 
  




=======
#include <iostream>
using namespace std;


main(){

 string movieName;
 float adultTicketPrice;
 float childtTicketPrice;
 float numberOfAdultTickets;
 float numberOfchildTickets;
 float percentage;
 float amountByAdult;
 float amountByChild;
 float total;
 float amountForDonations;
 float remainingAmount;


 cout << "Enter Movie name: " ;
 cin >> movieName;
 cout <<"Enter Adult ticket price: ";
 cin >> adultTicketPrice;
 cout << "Enter child ticket price: ";
 cin >> childtTicketPrice;
 cout << "Enter number of adult tickets sold: " ;
 cin >>  numberOfAdultTickets;
 cout << "Enter number of child tickets sold: " ; 
 cin >> numberOfchildTickets;
 cout << "Enter percentage to donate: ";
 cin >> percentage;
 cout << " _________________________________________________________________________ " <<endl;
   
 amountByAdult = adultTicketPrice * numberOfAdultTickets;
 amountByChild = childtTicketPrice * numberOfchildTickets;
 total = amountByChild + amountByAdult;


 amountForDonations = total * (percentage/100);
 remainingAmount = total - amountForDonations;

 cout << "Total amount generated: " <<total <<endl;
 cout << "Amount for donation: " <<amountForDonations <<endl;
 cout << "Amount after donation: " <<remainingAmount <<endl;
 
 
  




>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}