#include <iostream>
using namespace std;
int main(){


// User enter lname, hours, and payrate. 
string lname;
double hours, payrate, grosspay;

// Ask user for input
cout << "Enter your last name: ";
cin >> lname;

cout << "Enter number of hours worked: ";
cin >> hours;

cout << "Enter pay rate: ";
cin >> payrate;

////Compute gross pay to be hours * payrate/  display last name and gross pay.
grosspay = hours * payrate;

//message

cout << lname <<", Your gross pay for the week is: " << grosspay << endl;

    return 0;
}