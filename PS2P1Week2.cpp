#include <iostream>
#include <iomanip>
using namespace std;
int main () {

// Character types - Quantity and Price 
double quantity, total;
float price;

// Input
cout << "Enter Item Quantity: ";
cin >> quantity;
cout << "Assign Price of Product: ";
cin >> price;

// Operation

total = (quantity * price);

//Output

cout << fixed << setprecision (2);
cout << "Total Cost is $" << total << endl;

    return 0;

}