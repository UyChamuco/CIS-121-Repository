#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float part, qty, unit_price,total;

    cout<<"Select The Part You Require: [10, 99, 55, 70, 50]";
    cin>>part;
    cout<<"Enter Quantity To Purchase: ";
    cin>>qty;

    if (part == 10 && qty > 1000)
        unit_price = 1.00;
    else if (part == 99 && qty > 500)
        unit_price =2.00;
    else
    unit_price = 5.00;

    total = unit_price * qty;

////// OUtput display part nymber, cost and unit price;

    cout<<setprecision(2)<<fixed;
    cout<<"Part Number "<<setw(10)<<part<<endl;
    cout<<"Unit Price: $"<<setw(10)<<unit_price<<endl;
    cout<<"Total Cost: $"<<setw(10)<<total<<endl;




    return 0;
}
