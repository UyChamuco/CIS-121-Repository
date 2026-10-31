#include <iostream>
#include <iomanip>
using namespace std;

void det_charges(int area, float weight, float &area_charge, float &weight_charge, float &postage);

int main()
{
    float weight, area_charge, weight_charge, postage;
    int area, entries;
    entries = 0;

    //before loop
    cout<<"Enter Your Area Code or Press [Crtl+Z] to exit:";
    cin>>area;

    while(!cin.eof())
    {
        cout<<"Enter package Weight: ";
        cin>>weight;
    //function

    det_charges(area, weight, area_charge, weight_charge, postage);
    entries = entries + 1;


    //output within loop:
    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Area Charge:    $"<<setw(10)<<area_charge<<endl;
    cout<<"Weight Charge:  $"<<setw(10)<<weight_charge<<endl;
    cout<<"Postage Amount: $"<<setw(10)<<postage<<endl;
//get new line
    cout<<endl;
    cout<<"Enter Your Area Code or Press [Crtl+Z] to exit:";
    cin>>area;
    }
//cout after loop
    cout<<endl;
    cout<<"****************************"<<endl;
    cout<<"Entries made:"<<entries<<endl;

    return 0;
}

//postage = area charge + weight charge
//fcuntion returns: area charge, weight charge, and postage by reference
//pass weight and area code by value
void det_charges(int area, float weight, float &area_charge, float &weight_charge, float &postage)
{
//area
    if(area == 60171)
        area_charge = 2.00f;
    else if(area == 60172)
        area_charge = 2.50f;
    else if(area == 60635)
        area_charge = 3.00f;
    else
        area_charge = 5.00f;

// weight
    if(weight>100)
        weight_charge = 0.02f;
    else if(weight>50)
        weight_charge = 0.03f;
    else
        weight_charge = 0.05f;
//comp area & weight charges
    weight_charge = weight * weight_charge;
    postage = area_charge + weight_charge;

}
