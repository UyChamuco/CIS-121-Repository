#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    float principle, int_rate;
    int years_to_maturity;

    cout<<"Enter the principle amount to invest:  ";
    cin>>principle;
    cout<<"Enter desired years to maturity:  ";
    cin>>years_to_maturity;


    if(principle > 100000 && years_to_maturity == 5)
        int_rate = 0.06f;
    else if (principle >= 50000.00f && principle <= 100000.00f && years_to_maturity == 10)
        int_rate = 0.05f;
    else if(principle >= 50000.00f && principle <= 100000.00f && years_to_maturity == 5)
        int_rate = 0.04f;
    else
        int_rate = 0.02f;


    cout<<setprecision(2)<<fixed;
    cout<<"Interest rate you get is: "<<setw(10)<<int_rate * 100<<"%";



    return 0;

}