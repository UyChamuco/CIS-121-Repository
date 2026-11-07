#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void comp_price(string item, float qty, float price, float &ext_price, float &total);

int main()
{
    string item;
    float qty, price, ext_price, tax, total;
    fstream infile;
    float sum_total = 0;
    float sum_ext_price = 0;

    infile.open("grocery.txt");
//loop
    while(!infile.eof())
    {
        infile>>item>>qty>>price;
//function
        comp_price(item, qty, price, ext_price, total);
        sum_total = sum_total + ext_price;
        sum_ext_price = sum_ext_price + ext_price;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Item:            "<<item<<endl;
        cout<<"Quantity:        "<<qty<<endl;
        cout<<"Price Per Item: $ "<<price<<endl;
        cout<<"Extended Price: $ "<<ext_price<<endl;


    }
///end loop
    tax = sum_ext_price * 0.07;
    total = sum_ext_price + tax;

    infile.close();
//display final sums
    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Items Total before Tax: $"<<setw(10)<<sum_ext_price<<endl;
    cout<<"Tax:                    $"<<setw(10)<<tax<<endl;
    cout<<"Total with Tax:         $"<<setw(10)<<total<<endl;

    return 0;

}
void comp_price(string item, float qty, float price, float &ext_price, float &total)
{
   ext_price = qty * price;
}