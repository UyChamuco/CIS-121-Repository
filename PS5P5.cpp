#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    double weight, rate,total;

    cout<<"Enter weight:  ";
    cin>>weight;

    if(weight >100)
        rate = 0.50;
    else if (weight>=30)
        rate = 0.25;
    else if(weight>=20)
        rate = 0.20;
    else 
        rate = 0.10;

    total = weight * rate;

    cout<<setprecision(2)<<fixed<<endl; 
    cout<<"Weight is:         "<<weight<<"lbs"<<endl;
    cout<<"Your unit rate is: $"<< rate<<endl;
    cout<<"Your total is:     $"<< total<<endl;


    return 0;
}