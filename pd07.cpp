# include <iostream>
using namespace std;
main(){

string name;
float adult;
float child;
float solda;
float soldc;
float percentage;
float amount;
float net;
float percent;


cout<< "Enter movie name: ";
cin>> name;

cout<< "Enter adult ticket price: ";
cin>> adult;

cout<< "Enter child ticket price: ";
cin>> child;

cout<< "Enter number of adult tickets sold: ";
cin>> solda;

cout<< "Enter number of child tickets sold: ";
cin>> soldc;

cout<< "Percentage is: ";
cin>> percentage;

cout<< "___________________________________________";
cout<< endl;

cout<< "Total amount generated: ";
amount=(adult*solda)+(child*soldc);
cout<< amount;
cout<< endl;

percent=amount*(percentage/100);
cout<< "Amount after donation: ";
net=amount-percent;
cout<< net;
  







}