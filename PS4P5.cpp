///User last name, number of dependents, and gross income
//adjusted grossincome = grossincome - (dependents * 12000);
//determine income tax rate
///adjusted grossincome > 50000 then tax rate = 20%
///adjusted grossincome <= 50000 then tax rate = 10%
//income tax = adjusted grossincome * tax rate
//if income tax < 0 then income tax = 100;
///display last name, number of dependents, gross income, adjusted gross income, income tax rate, and income tax
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

string lname;
int dependents;
float grossincome, adjusted_grossincome, tax_rate, income_tax;

cout<<"Enter last name: ";
cin>>lname;

cout<<"Enter number of dependents: ";
cin>>dependents;    

cout<<"Enter gross income: ";
cin>>grossincome;

/////////
adjusted_grossincome = grossincome - (dependents * 12000);

if(adjusted_grossincome > 50000)
{
    tax_rate = 0.20;
}
else
{
    tax_rate = 0.10;
}

income_tax = adjusted_grossincome * tax_rate;

if(income_tax < 0)
{
    income_tax = 100;
}
    cout<<setprecision(2)<<fixed<<endl;
    cout<< "Hello,                     "<<lname<<endl;
    cout<< "Number of dependents:      "<<dependents<<endl;
    cout<< "Gross Income:             $"<<setw(10)<<grossincome<<endl;
    cout<< "Adjusted Gross Income:    $"<<setw(10)<<adjusted_grossincome<<endl;
    cout<< "Income Tax Rate:           "<<setw(10)<<tax_rate<<endl;
    cout<< "Income Tax:                $"<<setw(10)<<income_tax<<endl;


    return 0;
}
