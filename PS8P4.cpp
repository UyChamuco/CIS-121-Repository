#include<iostream>
#include<iomanip>
using namespace std;

// two functions, compute unit price and shipping
//w c g// 10, 15, 20, shipping 2, 5, 7

float detUnit_price(char code)
{
    float unit_price;

    if(code == 'W')
        unit_price = 10.00;
    else if(code == 'C')
        unit_price = 15.00;
    else if(code == 'G')
        unit_price = 20.00;

    return unit_price;
}

float detShipping(float shipping, float unit_price)
{
    float shipping_cost;

    if(unit_price == 10.00)
        shipping_cost = 2.00;
    else if(unit_price == 15.00)
        shipping_cost = 5.00;
    else if(unit_price == 20.00)
        shipping_cost = 7.00;
    else
    shipping_cost = 0.0;

    return shipping_cost;
}

int main()

{
    char code;
    float qty, unit_price, shipping_cost, extended_price;
    float sum_total_price = 0;
    int orders = 0;
    float shipping;

    cout<<"Enter Product code: [W, C, or G]  or press [Ctrl+Z] to Exit: ";
    cin>>code;

    while(!cin.eof())
    {
        cout<<"Enter Quantity of Items: ";
        cin>>qty;

        unit_price = detUnit_price(code);
        shipping_cost = detShipping(shipping, unit_price);

        extended_price = (unit_price * qty) + shipping_cost;
        sum_total_price = sum_total_price + extended_price;
        orders = orders + 1;

        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"Quantity of Items Ordered: "<<setw(10)<<qty<<endl;
        cout<<"Unit Price:  $"<<setw(10)<<unit_price<<endl;
        cout<<"Shipping Cost: $"<<setw(10)<<shipping_cost<<endl;
        cout<<"Order Total:  $"<<setw(10)<<extended_price<<endl;

        cout<<"Enter Product code: [W, C, or G]  or press [Ctrl+Z] to Exit: "<<endl;
        cin>>code;
    }

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"****************************"<<endl;
    cout<<"Total Cost(s):  $"<<setw(10)<<sum_total_price<<endl;
    cout<<"Total Number of Entries Made: "<<orders<<endl;

    return 0;
}