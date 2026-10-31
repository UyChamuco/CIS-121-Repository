#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void comp_investment(float inv_amount, int int_rates, float &five_year, float &ten_year);

int main()
{
    float inv_amount, five_year, ten_year;
    int int_rates, entries;
    entries = 0;

    cout<<"Enter Amount To Invest: $ or press [Ctrl+Z] to exit : ";
    cin>>inv_amount;

    while(!cin.eof())
    {
        cout<<"Choose an Interest Rate [5 or 10] %: ";
        cin>>int_rates;
        cout<<"\n";

        ///functions
        comp_investment(inv_amount, int_rates, five_year, ten_year);
        entries = entries + 1;

        cout<<"\n";
        cout<<"Enter Amount To Invest: $ or press [Ctrl+Z] to exit : ";
        cin>>inv_amount;

    }
//loop end
    cout<<"******************\n";
    cout<<"Entries Made: "<<entries<<endl;
    return 0;
}
/// function comp int rtes
void comp_investment(float inv_amount, int int_rates, float &five_year, float &ten_year)
{ 
    cout<<setprecision(2)<<fixed;
    cout<<"Initial Investment Amount: $ "<<inv_amount<<endl;

    if (int_rates == 5)
    {
        five_year = inv_amount * pow(1 + 0.05, 5);
        cout<<"Total After Five Years at 5% Int. Rate: $"<<five_year<<endl;
        
    }
    
    else if (int_rates == 10)
    {
        ten_year = inv_amount * pow(1 + 0.10, 10);
        cout<<"Total After Ten years at 10% Int. Rate: $"<<ten_year<<endl;
    }

}