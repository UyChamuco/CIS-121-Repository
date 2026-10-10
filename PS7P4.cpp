#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    string lname;
    char job_code;
    double hours_worked, pay;
    int total_entries = 0;
    double average_pay = 0, total_pay = 0;

    while(!cin.eof())
    {
        cout<<"\nEnter Employee Last Name: ";
        cin>>lname;
        if(cin.eof())
           break;
        cout<<"Enter Job Code [A, L, or J]: ";
        cin>>job_code;
        if(cin.eof())
            break;
        cout<<"Enter Hours Worked: ";
        cin>>hours_worked;
        if(cin.eof())
           break;
//////
        if(toupper(job_code) == 'L')
        pay = 25.00;
        else if(toupper(job_code) == 'A')
        pay = 30.00;
        else if(toupper(job_code) == 'J')
        pay = 50.00;
///////
        if(hours_worked > 40)
            pay = pay * 40 + (pay * 1.5) * (hours_worked - 40);
        else
            pay = pay * hours_worked;

            total_pay = total_pay + pay;
            total_entries = total_entries + 1;
            average_pay = total_pay / total_entries;
///////
            cout<<endl;
            cout<<setprecision(2)<<fixed;
            cout<<"Employee Last Name: "<<lname<<endl;
            cout<<"Job Code: "<<job_code<<endl;
            cout<<"Hours Worked: "<<hours_worked<<endl;
            cout<<"Pay For This Period: $"<<pay<<endl;
            cout<<endl;
            cout<<"Press Ctrl+z to Exit "<<endl;
    }
 ///////   
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Total Number of Employees: "<<setw(10)<<total_entries<<endl;
        cout<<"Average Pay For All Employees: $"<<setw(10)<<average_pay<<endl;
        cout<<"Thank You For Using Our Calculator!"<<endl;

    return 0;
}