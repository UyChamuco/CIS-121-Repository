#include <iostream>
#include <iomanip>
using namespace std;
void comptotals(float qty, float price, float &extprice, float &tax, float &totalorder);


int main()
{
    //def variables
    float qty, price, extprice, tax, totalorder;
    float totalallorders, totaltax;
    totalallorders = 0.0f;
    totaltax = 0.0f;

    //get first data line

    cout<<"Enter quantity, ctrl+Z to stop: ";
    cin>>qty;

    while(!cin.eof())
    {
        cout<<"Enter price of item: $";
        cin>>price;

       comptotals(qty, price, extprice, tax, totalorder);

        //sum and count
        totalallorders = totalallorders + extprice;
        totaltax = totaltax + tax;

        //display a line of data

        cout<<setprecision(2)<<fixed;
        cout<<"Extended Price: $"<<setw(10)<<extprice<<endl;
        cout<<"Total order: $"<<setw(10)<<totalorder<<endl;
        cout<<"Tax: $"<<setw(10)<<tax;
        cout<<endl;

        //gett new line;
        cout<<"Enter quantity, ctrl+Z to stop: ";
        cin>>qty;
    }

    //end of loop display
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Total of all orders: $"<<setw(10)<<totalallorders<<endl;
        cout<<"Total All Tax: $"<<setw(10)<<totaltax<<endl;

    return 0;
}
//no semi colon here 
void comptotals(float qty, float price, float &extprice, float &tax, float &totalorder)
{
    extprice = qty * price;
    tax = extprice * 0.07f;
     totalorder = tax + extprice;

}