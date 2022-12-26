# include <iostream>
using namespace std;
main(){

string name;
float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float total;
float percentage;


cout<< "Your name: ";
cin>> name;

cout<< "Enter Subject01 marks: ";
cin>> sub1;

cout<< "Enter Subject02 marks: ";
cin>> sub2;

cout<< "Enter Subject03 marks: ";
cin>> sub3;

cout<< "Enter Subject04 marks: ";
cin>> sub4;

cout<< "Enter Subject05 marks: ";
cin>> sub5;

total=sub1+sub2+sub3+sub4+sub5;

cout<< "your percentage is: ";
percentage=(total/500)*100;
cout<< percentage;





}