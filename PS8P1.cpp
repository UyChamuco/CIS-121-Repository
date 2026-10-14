//use a function to compute miles/gallon
#include <iostream>
#include<iomanip>
using namespace std;

/// 
double calculateMPG(double miles, double gallons)
    {
        if(gallons == 0)
            return 0;
        else
            return miles/gallons;
    }

/// 
int main()
{
    string city;
    double gallons, miles, mpg;
    int trips = 0;
    float total_miles = 0;

    cout<<"Enter destination city or [Press Crtl+Z to terminate]: ";
    cin>>city;

/// loop
    while(!cin.eof())
    {
        cout<<"Enter miles traveled: ";
        cin>>miles;
        cout<<"enter gallons of gas used for trip: ";
        cin>>gallons;

        mpg = calculateMPG(miles, gallons);
        total_miles = total_miles + miles;
        trips = trips + 1;

//output/loop
        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"City Traveled to: "<<city<<endl;
        cout<<"Miles per Gallon for Trip: "<<mpg<<endl;

        cout<<"Enter destination city or [Press Crtl+Z to terminate]: ";
        cin>>city;
    }

//out of loop output
    cout<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"**************************"<<setw(10)<<endl;
    cout<<"Total Number of miles traveled: "<<setw(10)<<total_miles<<endl;
    cout<<"Total Trips Made: "<<setw(10)<<trips<<endl;

    return 0;
}