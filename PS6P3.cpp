#include <iostream>
#include <iomanip>
using namespace std;

int main(){


    int tickets, total, price_perticket;
    char location;


    cout<<"Enter the number of tickets you want to purchase: ";
    cin>>tickets;
    cout<<"Enter The Location Code: [H or L] ";
    cin>>location;

    if(tickets > 25 || location == 'H')
        price_perticket = 30.00f;
    else if(tickets >=10 || location == 'L')
        price_perticket = 40.00f;
    else 
        price_perticket = 50.00f;

        total = price_perticket * tickets;
    
    //// output

    cout<<setprecision(2)<<fixed;
    cout<<"You bought: "<<setw(10)<<tickets<<" Tickets."<<endl;
    cout<<"Price Per Ticket For Location ["<<location<<"] is: $"<<price_perticket<<endl;
    cout<<"Your Total Is: $"<<setw(10)<<total;

    return 0;
}