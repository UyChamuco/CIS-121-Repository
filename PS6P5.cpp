#include <iostream>
#include <iomanip>
using namespace std;

int main (){

// input hours and job code 
//compute gross salary for employees


    char code;
    float hours, rate, total;

    cout<<"Enter Your Job Code: [A, L, or J]  ";
    cin>>code;
    cout<<"Enter Total Hours Worked: ";
    cin>>hours;

    /////

    if(code == 'L' && hours > 40)
        rate = 50.00;
    else if(code == 'L' && hours <= 40)
        rate = 40.00;
    else if(code == 'J' && hours > 60)
        rate = 60.00;
    else if(code == 'J' && hours <=60)
        rate = 75.00;
    else if(code == 'A' && hours >40)
        rate = 25.00;
    else if (code == 'A' && hours <=40)
        rate = 20.00;
    

//////
    total = rate * hours;


    cout<<setprecision(2)<<fixed;
    cout<<"Gross Pay:  $"<<total;






    return 0;


}