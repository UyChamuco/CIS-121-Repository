#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Enter destintion city, miles travled to get there, and gallons of gas used to get there
    //compute miles per gallon
    // display destiation city, miles per gallon for each trip
    //
    // sum miles travled for all trips, total number of trips made;

    string city;
    double miles, gallons, mpg = 0;
    int trips = 0;
    double miles_total = 0;

    while(!cin.eof())
    {
        cout<<"Enter City Name: ";
        cin>>city;
        if(cin.eof())
            break;
        cout<<"Enter Number Of Miles Traveled To City: ";
        cin>>miles;
        if(cin.eof())
            break;
        cout<<"Enter The Amount Of Gas Used For This Trip: ";
        cin>>gallons;
        if(cin.eof())
            break;

    //////
        mpg = (miles/gallons);
        miles_total = miles_total+ miles;
        trips++;
    ///
        cout<<setprecision(2)<<fixed;
        cout<<"\nDestination City is: "<<city<<endl;
        cout<<"Miles Per Gallon Used For "<<city<<" was: "<<mpg<<"mpg"<<endl;
        cout<<"\nPress Ctrl+Z To Exit. "<<endl;

    }
        cout<<"******************************"<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Miles Total: "<<miles_total<<endl;
        cout<<"Trips Made: "<<trips<<endl;

    return 0;
}