#include <iostream>
using namespace std;
int main() {

    //Variables - Lname, credits, multiply, and add.
    string lname;
    double credits, total;

    //Input- allow user to Enter Lname and credits taken.
cout << "Enter Last name: ";
cin >> lname;

cout << "Enter credit hours: ";
cin >> credits;

    //Output - 250x + 100 lab fee.
 total = 250 * credits + 100;

cout << lname << ", your tuition comes out to: " << total << endl;

    return 0;

}