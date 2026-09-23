#include <iostream>
#include <iomanip>
using namespace std;

int main(){

///input annual salary
//determine tax rate
//compute tax amount owed
//output: salary, tax rate, and tax amount;

int salary, tax_rate, tax_owed;

cout<<"Please Enter Annual Salary:  $"<<endl;
cin>>salary;

if (salary > 100000)
    tax_rate = 0.40;
else if(salary>=50000)
    tax_rate = 0.35;
else
    tax_rate = 0.25;

tax_owed = salary * tax_rate;

cout<<setprecision(10)<<fixed<<endl;
cout<<"Annual Salary:     $"<<salary<<endl;
cout<<"Tax Rate:          $"<<tax_rate<<endl;
cout<<"Tax Owed This Tax Year: $"<<tax_owed<<endl;



    return 0;

}