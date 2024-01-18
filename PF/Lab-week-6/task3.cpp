<<<<<<< HEAD
#include <iostream>
using namespace std;



string checkTitle(int age , char gender);



main(){

 int age;
 char gender;


 cout << "Enter age: ";
 cin >> age;

 cout << "Enter gender: ";
 cin >> gender;


 string result = checkTitle(age , gender);
 cout << result;



}





string checkTitle(int age , char gender)
{

 string title;


 if (age >= 16 && gender == 'm' )
 {
  
    title = "MR."; 
 }

  else if (age < 16 && gender == 'm' )
 {
  
    title = "Boy"; 
 }
 
 else if (age >= 16 && gender == 'f' )
 {
  
    title = "Ms."; 
 }

 else if (age < 16 && gender == 'f' )
 {
  
    title = "Girl"; 
 }

 else{
    title = "Invalid";
 }

return title;





=======
#include <iostream>
using namespace std;



string checkTitle(int age , char gender);



main(){

 int age;
 char gender;


 cout << "Enter age: ";
 cin >> age;

 cout << "Enter gender: ";
 cin >> gender;


 string result = checkTitle(age , gender);
 cout << result;



}





string checkTitle(int age , char gender)
{

 string title;


 if (age >= 16 && gender == 'm' )
 {
  
    title = "MR."; 
 }

  else if (age < 16 && gender == 'm' )
 {
  
    title = "Boy"; 
 }
 
 else if (age >= 16 && gender == 'f' )
 {
  
    title = "Ms."; 
 }

 else if (age < 16 && gender == 'f' )
 {
  
    title = "Girl"; 
 }

 else{
    title = "Invalid";
 }

return title;





>>>>>>> 798bd20ff28a7d6f5fb5388ab54f139e0a5dd396
}