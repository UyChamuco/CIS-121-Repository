#include <iostream>
#include<iomanip>
using namespace std;


///user enters quantity of item.
///if quantity >= 1000 then price per item is $3.00.


//could do if (this)> thant (this) =  charge this without needing an else statement.

/// quantity < 1000 price = $5.00
int main()
{

    const float tax = 0.07;

    double quantity, price_perItem, extended_price, total, taxdollar;
    /////
        
    cout<< "Enter quantity of items: ";
    cin >> quantity;

        if (quantity >= 1000){
        price_perItem = 3.00;
        extended_price = quantity * price_perItem;
        taxdollar = (tax * extended_price);
        total = taxdollar + extended_price;

        cout<<"Quantity:    "<< quantity<<endl;
        cout<< "Unit price: "<<price_perItem<<endl;
        cout<< "Tax Amount: "<< taxdollar<<endl;
        cout<< "Total:      "<<total<<endl;

        
        }
        else {
            price_perItem = 5.00;
            extended_price = quantity * price_perItem;
            taxdollar = (tax * extended_price);
            total = taxdollar + extended_price;
            
            cout<<"Quantity:    "<< quantity<<endl;
            cout<< "Unit price: "<<price_perItem<<endl;
            cout<< "Tax Amount: "<< taxdollar<<endl;
            cout<< "Total:      "<<total<<endl;
        }


    return 0;
}