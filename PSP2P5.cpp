#include <iostream>
#include <iomanip>
using namespace std;
int main(){

    // Variables - Asking and decimal number
    float discount;
    double price, total;

    //Input
cout << "Enter Item Price: ";
cin >> price;
cout << "Enter Discount Percent in decimal form: ";
cin >> discount;

//operation
total = price - (price * discount);

    // output

cout << fixed << setprecision(2);
cout << "The Item is " << discount << "% off \n";
cout << "Total after discount is $" << total << endl;
    

    return 0;
}