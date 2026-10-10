#include <iostream>
#include <iomanip>
using namespace std;
/// 
int main()
{
    double qty, price, discount;
    double extended_price;
    double discount_sum =0, discount_count=0, total_price=0, total_items=0;

    while (!cin.eof()) 
    {
        cout<<"Enter quantity of items or [Press Ctrl+z to exit]:";
        cin>>qty;
        if (cin.eof())
            break;
        cout<<"Enter price per item: $";
        cin>>price;
        if (cin.eof())
            break;/// breaks used to stop loop from going further by using true function// messes up numbers//

        if (qty > 1000)
        {
            extended_price = qty * price;
            discount =  extended_price * 0.10; 
            extended_price = extended_price - discount;
            discount_sum = discount_sum  + discount; 
            discount_count++;
        }
        else
        {
        extended_price = qty * price;
        discount = 0; 
        }    
///// adding price and items every loop
        total_price = total_price + extended_price;
        total_items = total_items + qty;

///// displaying in the loop
        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"Quantity ordered: "<<qty<<endl;
        cout<<"Price per item:  $"<<price<<endl;
        cout<<"Extended price:  $"<<extended_price<<endl; 
    }
///// output
    cout<<endl;
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"Total quantity of items ordered:  "<<setw(10)<<int(total_items)<<endl;
    cout<<"Total Price of all Items ordered: $"<<setw(10)<<total_price<<endl;
    cout<<"Amount of Discount(s) applied:    $"<<setw(10)<<discount_sum<<endl;
    cout<<"Number of Discounts applied:"<<setw(10)<<int(discount_count)<<endl;
    cout<<"Thank You For Using Our Program!"<<endl;
    return 0;

}