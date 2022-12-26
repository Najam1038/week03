# include <iostream>
using namespace std;
main(){
float vegprice;
float fruitprice;
int veg;
int fruit;
float amountf;
float amountv;
float total;


cout<< "Vegetable price per kg: ";
cin>> vegprice;

cout<< "Fruit price per kg: ";
cin>> fruitprice;

cout<< "Total kg of vegetable: ";
cin>> veg;

cout<< "Total kg of fruit:  ";
cin>> fruit;
 
amountf=fruit*fruitprice;
amountv=veg*vegprice;

cout<< "Earnings: ";
total=(amountf+amountv)/1.94;
cout<< total;









}