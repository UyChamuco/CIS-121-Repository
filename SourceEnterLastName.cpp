#include <iostream>
using namespace std;
int main()
{
	// define variables
	double n1, n2, s;

	// input phase
	cout << "Enter a real number ";
	cin >> n1;
	cout << "Enter a real number ";
	cin >> n2;

	// Process phase
	s = n1 + n2;
	
	// Output phase

	cout << "The sum of " << n1 << " and " << n2 << " is " << s << endl;
	return 0;
}