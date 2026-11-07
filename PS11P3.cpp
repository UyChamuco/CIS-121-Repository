#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

float comp_mpg(float miles, float gallons)
{
    float mpg;
    mpg = miles/gallons;
    return mpg;
}

int main()
{
    fstream infile;
    float gallons, miles, mpg, avg_mpg;
    float sum_miles = 0;
    float sum_gallons = 0;

    infile.open("trips.txt");

    while(!infile.eof())
    {///read in the file gallons and miles 
        infile>>gallons>>miles;
//function call
        mpg = comp_mpg(miles, gallons);
        sum_gallons = sum_gallons + gallons;
        sum_miles = sum_miles + miles;
//output
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        
        cout<<"Miles Traveled: "<<setw(10)<<miles<<endl;
        cout<<"Gallons Used: "<<setw(10)<<gallons<<endl;
        cout<<"MPG For This Trip: "<<setw(10)<<mpg<<endl;
    }
///endloop

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Total Miles Traveled: "<<setw(10)<<sum_miles<<endl;
    cout<<"Total Gallons Used:   "<<setw(10)<<sum_gallons<<endl;

///close
    infile.close();

    return 0;

}