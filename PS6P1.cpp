#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    const float tax_percent = 0.07;

    float qty, extended_price, total, price, tax_amount;
    char status;

    cout<<"Enter quantity of widgets:  ";
    cin>>qty;
    cout<<"Enter Status: e.g... [A, B, C, D...]";
    cin>>status;

    if (qty > 10000.00 && status == 'A')
        price = 10.00;
    else if (qty > 10000.00 && status == 'B')
        price = 12.00;
    else if (qty >= 5000.00 && status == 'C')
        price = 20.00;
    else if (qty >= 5000.00 && status == 'D')
        price = 22.00;
    else if (qty < 5000.00)
        price = 30.00;
///////

    extended_price = qty * price;
    tax_amount = extended_price * tax_percent;
    total = extended_price + tax_amount;
/////

    cout<<setprecision(2)<<fixed;
    cout<<"Extended Price: $"<<setw(10)<<extended_price <<endl;
    cout<<"Tax: $"<<setw(10)<<tax_amount<<endl;
    cout<<"Total Cost: $"<<setw(10)<<total<<endl;

    return 0;

}