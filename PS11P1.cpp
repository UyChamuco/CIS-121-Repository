#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void comp_costs(string make, string model, float MSRP, float sales_price, float &sales_tax, float &savings);


int main()
{
    ifstream infile;
    float sum_savings = 0;
    string make, model;
    float savings, MSRP, sales_price, sales_tax;

    infile.open("auto.txt");

    while(!infile.eof())
    {
        infile>>make>>model>>MSRP>>sales_price;

        comp_costs(make, model, MSRP, sales_price, sales_tax, savings);
        sum_savings = sum_savings + savings;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Make and Model: "<<make<<" "<<model<<endl;
        //cout<<"Model:        "<<setw(10)<<model<<endl;
        cout<<"MSRP:           $"<<MSRP<<endl;
        cout<<"Sales Price:    $"<<sales_price<<endl;
        cout<<"Sales Tax:      $"<<sales_tax<<endl;
        cout<<"Money Saved:    $"<<savings<<endl;
        

    }
    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"******************************"<<endl;
    cout<<"Total Amount Saved This Session: $"<<sum_savings<<endl;


    infile.close();
    return 0;

}
void comp_costs(string make, string model, float MSRP, float sales_price, float &sales_tax, float &savings)
{
    savings = MSRP - sales_price;
    sales_tax = sales_price * 0.07;
}