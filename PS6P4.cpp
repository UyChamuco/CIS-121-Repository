#include <iostream>
#include <iomanip>
using namespace std;

int main() {

/// Equiptment code
//rental code H or F
// determine cost of rental and display rental cost;

    char equiptment_code, time;
    float cost;


    cout<<"Enter Equiptment Code: [A, B, C...] ";
    cin>>equiptment_code;
    cout<<"Enter [F] for full day rentals or [H] for half day rentals: ";
    cin>>time;

    if (equiptment_code == 'A' && time == 'F')
        cost = 10.00;
    else if (equiptment_code == 'A' && time == 'H')
        cost = 15.00;
    else if (equiptment_code == 'B' && time == 'F')
        cost = 20.00;
     else if (equiptment_code == 'B' && time == 'H')
        cost = 35.00;
    else if (equiptment_code == 'C' && time == 'F')
        cost = 40.00;
    else if (equiptment_code == 'C' && time == 'H')
        cost = 45.00;
    else
        cost = 50.00;

    cout<<"The Total Cost Of Your Rental Is :   $"<<cost;


    return 0;
}