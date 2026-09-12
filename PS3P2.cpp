#include <iostream>
#include <iomanip>
using namespace std;


const float StockPrice = 1.50;
/////// set price


int main(){

double shares, balance, sharesOwned,value,buy;
int choice, portfolio;

shares = 0;

////////// loop

do{
    cout<< "Hello, Investor! What would you like to do today? \n";
    cout<< "_________________________________________\n";
    cout<<"1. View Portfolio \n";
    cout<<"2. Buy shares \n";
    cout<<"3. Done. \n";
    cin>> choice;


//// choices

    switch(choice){
        
        case 1:cout<<setprecision (2)<<fixed<<endl; cout<< "Your portfolio value is: $" << value << endl;
               cout<< setprecision (2) << "You own " << sharesOwned << " shares. \n";
                    break;
        case 2:cout<<"You own "<< sharesOwned << " share (s). How many shares would you like to buy? \n\n";
            cin >> buy;
            sharesOwned = buy + sharesOwned;
            value = sharesOwned * StockPrice;

            cout<<setprecision (2)<< "You purchased " << buy << " share(s). You now own $" << value << " worth of shares. \n";
                break;
        case 3:
            cout<< "Thank you for using our stock trading app! \n";
                break;
        default:
            cout<< "Invalid choice. Please try again. \n\n";


            
    }


}while(choice != 3);

return 0;


}
