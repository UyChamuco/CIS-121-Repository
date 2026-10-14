#include <iostream>
#include <iomanip>
using namespace std;

//calculate pay using a function
float detPay(char jobcode)
{
    float pay;

    if(jobcode == 'L')
        pay = 25.00;
    else if(jobcode == 'A')
        pay = 30.00;
    else if(jobcode == 'J')
        pay = 50.00;

    return pay;

}

int main ()
// define variables
{
    string name;
    char jobcode;
    float gross_pay, hours, average_pay, overtime, pay;
    int employees = 0, total_grosspay = 0;
    float over_time_cap = 40, overtime_pay = 0;

    cout<<"Enter employee name: [Press Ctrl to Exit] ";
    cin>>name;

    while(!cin.eof())
    {
        cout<<"Enter Job Code [L, A, or J] ";
        cin>>jobcode;
        cout<<"Enter Number of Hours Worked: ";
        cin>>hours;

        //pay = detPay(pay); ?

        if(hours <= over_time_cap)
        {
            pay = detPay(jobcode);
            gross_pay = pay * hours;
            overtime_pay = 0;
        }

        else
        {
            pay = detPay(jobcode);
            
            overtime = hours - over_time_cap;
            overtime_pay =  overtime * pay * 1.5;
            gross_pay = (pay * over_time_cap) + overtime_pay;
        }

////
        total_grosspay = total_grosspay + gross_pay;
        employees = employees + 1;

        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"Employee: "<<name<<endl;
        cout<<"Pay for this pay period: $"<<gross_pay<<endl;
        
        cout<<"Enter employee name: [Press Ctrl to Exit] "<<endl;
        cin>>name;
        
    }

    //output

    average_pay = total_grosspay/employees;

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"********************************"<<endl;
    cout<<"Average Pay Per Employee: "<<setw(10)<<average_pay<<endl;
    cout<<"Employees: "<<setw(10)<<employees<<endl;
    cout<<"Thank You for using our program!"<<setw(10)<<endl;

    return 0;
}