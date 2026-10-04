#include <iostream>
#include <iomanip>
using namespace std;
//main project
int main (){

    int choice, qty;
    char status;
    float price, total, tax_amount, extended_price;
    const float tax = 0.07;

        cout<<" TO PLACE YOUR ORDER"<<endl;
        cout<<"____________________\n";
        cout<<"\n1.- Orders larger than 10,000 units ";
        cout<<"\n2.- Orders between 5,000 and 10,000 units ";
        cout<<"\n3.- Orders Below 5,000 units \n\n ENTER CHOICE:";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [A or B]";
                cin>>status;
                if(status == 'A' && qty > 10000)
                    price = 10.00;
                else if (status == 'B' && qty>10000)
                    price = 12.00;
                else
                    cout<<"\n****INVALID INPUT****";
                break;
            case 2:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [C or D]";
                cin>>status;
                if(status == 'C'&& qty >=5000 && qty <= 10000)
                    price = 20.00;
                else if(status == 'D' && qty>=5000 && qty<=10000)
                    price = 22.00;
                else
                    cout<<"\n****INVALID INPUT****";
                break;
            case 3:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [Any]";
                cin>>status;
                if(qty<5000)
                    price = 30.00;
                else
                    cout<<"\n****INVALID INPUT****";
                break;
            default:
                cout<<"Invalid choice. Please try again.";
        }
// calculate

        extended_price = qty * price;
        tax_amount = extended_price * tax;
        total = extended_price + tax_amount;

//output

        cout<<setprecision(2)<<fixed;
        cout<<"\nOrder Of ("<<qty<<") Status:["<<status<<"] Unit(s)... "<<endl;
        cout<<"\nPrice Per Unit For Order:  $"<<price<<endl;
        cout<<"\nTax Amount: $"<<tax_amount<<endl;
        cout<<"\nYour Total Comes Out To: $"<<total<<endl;
        cout<<"\nTHANK YOU FOR YOUR BUSINESS!";

    return 0;

}