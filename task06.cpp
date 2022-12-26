# include <iostream>
using namespace std;
main(){
string name;
float matric;
float intermediate;
float ecat;
float aggregate;
float matricpercent;
float interpercent;
float ecatpercent;



cout<< "Enter name: ";
cin>> name;

cout<< "Enter matric marks: ";
cin>> matric;
matricpercent= (matric/1100)*10;

cout<< "Enter intermediate marks: ";
cin>> intermediate;
interpercent= (intermediate/550)*40;

cout<< "Enter Ecat marks:  ";
cin>> ecat;
ecatpercent=(ecat/400)*50;

cout<< "Aggregate is: ";
aggregate= ecatpercent+interpercent+matricpercent;
cout<< aggregate;










}