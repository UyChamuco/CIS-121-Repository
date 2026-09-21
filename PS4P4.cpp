/////Display name and cost of appliance ordered
/// appliances over $1000 have a warantee cost of 10% of the cost of the appliance
//Warantees <= 1000 have a warantee cost of 5% of the cost of the appliance
///user enters name and cost of appliance
#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    string appliance;
    float price, total, waranty_percent,waranty;

    cout<<"What appliance are you purchasing? ";
    cin>>appliance;
    cout<<"Enter the price of the appliance:  $";
    cin>>price;

    if(price>1000.00)
        waranty = 0.10;
    else
        waranty = 0.05;
    
    ///////

   waranty = (price * waranty);
    total = price + waranty;


/////
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"\nThank you for your purchase!"<<endl;
    cout<<"________________________"<<endl;
    cout<<"Appliance: "<<appliance<<endl;
    cout<<"Price:     $"<<setw(10)<<price<<endl;
    cout<<"Waranty:   $"<<setw(10)<<waranty<<endl;
    cout<<"Total:     $"<<setw(10)<<total<<endl;



    return 0;
}
