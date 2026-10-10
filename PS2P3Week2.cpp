#include <iostream>
using namespace std;
int main(){

    //Variables.
    double lenght, width, area, per;

    // allow user to enter lenght and width of rectangle.
cout << "Enter lenght: ";
cin >> lenght;

cout<< "Enter width: ";
cin >> width;

    // compute a = l * w 
area = lenght * width;

    // compute perimeter. p = 2l + 2w
per =  2 * (lenght + width);

 // output operations: 
cout << "The area of the rectangle = " << area << ", " << "and the perimeter = " << endl;

    return 0;
}