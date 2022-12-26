# include <iostream>
using namespace std;
main(){
int a;
int sum;


cout<< "Enter five integers: ";
cin>> a;

cout<< "Sum: ";
sum= (a%10)+(a/10)%10+((a/10)/10)%10+(((a/10)/10)/10)%10+((((a/10)/10)/10)/10)%10;
cout<< sum;









}