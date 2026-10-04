#include <iostream>
#include <iomanip>
using namespace std;

int main (){

    float salary, tax_rate, tax_amount;
    string filling_status;


    cout <<"Enter your annual salary  ";
    cin>>salary;
    cout<<"Enter filling status [S = Single, MFJ = Married Filling Jointly]";
    cin>>filling_status;

    if (salary >= 50000.00 && salary <= 100000.00f && filling_status == "MFJ")
    tax_rate=0.35f;
    else
        tax_rate=0.40f;

    tax_amount= tax_rate * salary;


    cout<< setprecision(2)<<fixed;
    cout<<"Tax owed is $"<< setw(10)<< tax_amount<<endl;









    return 0;

}