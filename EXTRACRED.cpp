#include <iostream>
#include <iomanip>
using namespace std;

///draft #3

int main (){

    int choice, qty;
    char status;
    float price, total;

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
                if (status == 'A' && choice >10000)
                    price = 10.00;
                else if (status == 'B' && choice>10000)
                    price = 12.00;
                else
                    cout<<"\n****INVALID INPUT****";
                break;
            case 2:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [C or D]";
                cin>>status;
                if(status == 'C'&& choice >=5000 &&choice <= 10000)
                    price = 20.00;
                else if(status == 'D' && choice>=5000 && choice<=10000)
                    price = 22.00;
                else
                    cout<<"\n****INVALID INPUT****";
                break;
            case 3:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [Any]";
                cin>>status;
                break;
            default:
                cout<<"Invalid choice. Please try again.";
        }

        total = price * qty;

        cout<<setprecision(2)<<fixed;
        cout<<"\nYour Total Comes Out To: $"<<total<<endl;
        cout<<"Price Per Unit For Order:  $"<<price<<endl;
        cout<<"\nTHANK YOU FOR YOUR BUSINESS!";

    return 0;

}