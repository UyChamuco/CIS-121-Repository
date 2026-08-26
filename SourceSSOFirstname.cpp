#include <iostream>
using namespace std;
int main()
{
 // define variables
	string fname, lname, msg;

	// input phase
	cout << "Enter first name";
	cin >> fname;
	cout << "Enter last name";
	cin >> lname;

	// process phase
	msg = "Hello " + fname + " " + lname;

	//output phase
	cout << msg << endl;

	return 0; 
}