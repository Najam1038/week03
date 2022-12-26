# include <iostream>
using namespace std;
main(){

float size;
float cost1;
float area;
float cost2;
float cost3;


cout<< "Enter bag size in pounds: ";
cin>> size;

cout<< "Enter cost of bag: ";
cin>> cost1;

cout<< "Enter area covered by each bag in square feet: ";
cin>> area;

cout<<"_____________________________________________________" << endl;

cout<< "Cost of fertilizer per pound: ";
cost2=cost1/size;
cout<< cost2;
cout<< endl;

cout<< "Cost of fertilizing the area per square feet: ";
cost3=cost1/area;
cout<< cost3;









}