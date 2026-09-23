#include <iostream>
#include <iomanip>
using namespace std;

int main(){

///buying apples, enter qty in lbs, 
///determine ppp
//display ppp and total

float price_per_pound;
double lbs,total;

cout<<"How many lbs of Apples would you like to buy?  ";
cin>>lbs;

if (lbs>100)
    price_per_pound = 0.10;
else if(lbs > 50)
    price_per_pound = 0.25;
else
    price_per_pound = 0.50;


////////

total = price_per_pound * lbs;
cout<<setprecision(2)<<fixed<<endl;
cout<<"Price per pound(s) of Apples:  $"<< price_per_pound<<endl;
cout<<"Your total cost is:            $"<<total<<endl;



    return 0;
}