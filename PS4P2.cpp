#include <iomanip>
#include <iostream>
using namespace std;

int main(){
///variables
    double quantity, unit_price, extended_price;
    string item;

    ///input
    cout<<"Enter Item: ";
    cin>> item;
    cout<<"Enter quantity to order: ";
    cin>> quantity;

    ///process

    if(item=="A")
        unit_price=10.00;

    else
        unit_price=20.00;

    extended_price=quantity* unit_price;
    ////

    cout<<"Item ordered:   "<<item<<endl;
    cout<<"Unit cost:     $"<<setw(10)<<unit_price<<endl;
    cout<<"Exteded Price: $"<<setw(10)<<extended_price<<endl;



    return 0;
}