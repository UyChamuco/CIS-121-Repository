#include <iostream>
#include <iomanip>
using namespace std;

void det_cost_per_widget(float widget, float &cost_per_widget, float &ext_price, float &sales_tax, float &order_total);

int main()
{
    string name;
    float widget, cost_per_widget, ext_price, sales_tax, order_total;
    float sum_of_total_orders = 0;

//before loop
    cout<<"Enter Name for order or press [Ctrl+Z] to exit:";
    cin>>name;

    while(!cin.eof())
    {
        cout<<"Enter Quantity of Wigets to order: ";
        cin>>widget;

        ///function
        det_cost_per_widget(widget, cost_per_widget, ext_price, sales_tax, order_total);
        sum_of_total_orders = sum_of_total_orders + order_total;

        ///display within loop
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Number of Widgets Ordered: "<<setw(10)<<widget<<endl;
        cout<<"Price Per Widget: $"<<setw(10)<<cost_per_widget<<endl;
        cout<<"Extended Price: $"<<setw(10)<<ext_price<<endl;
        cout<<"Sales_tax: $"<<setw(10)<<sales_tax<<endl;
        cout<<"Order Total: $"<<setw(10)<<order_total<<endl;

        ///loop get new line or exit
        cout<<endl;
        cout<<"Enter Name for order or press [Ctrl+Z] to exit:";
        cin>>name;
    }
    //exit loop
    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"***************************"<<endl;
    cout<<"Total Amount of All Orders: $"<<setw(10)<<sum_of_total_orders<<endl;

    return 0;
}
//no semi colon
void det_cost_per_widget(float widget, float &cost_per_widget, float &ext_price, float &sales_tax, float &order_total)
{

    if(widget >= 10000)  
        cost_per_widget = 4.00;
    else if (widget >= 5000)
        cost_per_widget = 5.00;
    else
        cost_per_widget = 10.00;

    ext_price = widget * cost_per_widget;
    sales_tax = ext_price * 0.07f;
    order_total = ext_price + sales_tax;

}
