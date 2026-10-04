#include <iostream>
#include <iomanip>
using namespace std;

/// draft #2



int main (){

    int choice, total, qty;
    char status;
    float price;

    do {

        cout<<"1.- For orders larger than 10,000. & Status option: [A]";
        cout<<"2.- For orders larger than 10,000. & Status option: [B]";
        cout<<"3.- For orders between 5,000 and 10,000. || status Option: [C]";
        cout<<"4.- For orders between 5,000 and 10,000. || status Option: [D]";
        cout<<"5.- Orders Below 5,000 || Status Option(s) [Any]";
        cout<<"6.- Exit Program.";
        cin>>choice;

        switch(choice) {
            case 1:
            case 2:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [A or B]";
                cin>>status;
                if (status == 'A')
                    price = 10.00;
                else if (status == 'B')
                    price = 12.00;
                break;
            case 3:
            case 4:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [C or D]";
                cin>>status;
                break;
            case 5:
                cout<<"Enter Quantity: ";
                cin>>qty;
                cout<<"Enter Status: [Any]";
                cin>>status;
                break;
            case 6:
                cout<<"Exiting Program.";
                break;
            default:
                cout<<"Invalid choice. Please try again.";
        }
        






    }while(choice!= 6)


    return 0;

}