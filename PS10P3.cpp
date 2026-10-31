#include <iostream>
#include <iomanip>
using namespace std;

void comp_tuition(float credit_hours, float fin_aid, float &tuition, float &tuition_owed) 
{
    tuition = credit_hours * 250.00f;
    tuition_owed = tuition - fin_aid;
}

int main()
{
    //def variables
    float fin_aid, tuition, tuition_owed, credit_hours, avg_tuition;
    float sum_tuition = 0;
    string lname;
    int students = 0;

    cout<<"Enter Student Last Name or press [Ctrl +Z] to Exit: ";
    cin>>lname;

    while(!cin.eof())
    {
        cout<<"Enter Credit Hours: ";
        cin>>credit_hours;
        cout<<"Enter Financial Aid: $";
        cin>>fin_aid;

    /// call funtion// arguments have to match parameters;
        comp_tuition(credit_hours, fin_aid, tuition, tuition_owed);

        sum_tuition = sum_tuition + tuition_owed;
        students = students + 1;
    ///output within loop
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Student: "<<setw(10)<<lname<<endl;
        cout<<"Tuition before Financial Aid is Applied: $"<<setw(10)<<tuition<<endl;
        cout<<"Tuition Owed With Fiancial Aid: $"<<setw(10)<<tuition_owed<<endl;
//get next line
        cout<<endl;
        cout<<"Enter Student Last Name or press [Ctrl +Z] to Exit: ";
        cin>>lname;

    }
    //// after loop output:
        avg_tuition = sum_tuition/students;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"*****************************"<<endl;
        cout<<"Total Tuition Owed: $"<<setw(10)<<sum_tuition<<endl;
        cout<<"Average Tuition Owed: $"<<setw(10)<<avg_tuition<<endl;
        cout<<"Total Students: "<<setw(10)<<students<<endl;

    return 0;
}