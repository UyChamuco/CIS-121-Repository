#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
    ///user enters last name, credit hours, and district code
    //  keep count of number of students, total amount of tuition owed, and the total amount of credit hours taken by all students
    // output: display total tuition, total credit hours, and total number of students

    string lname;
    float credit_hours, tuition;
    char code;
    int total_students = 0;
    float total_credits = 0, total_tuition = 0;

    while(!cin.eof())
    {
        cout<<"\nEnter The Student's Last Name: ";
        cin>>lname;
        if(cin.eof())
            break;
        cout<<"Enter District Code [I] In District or [O] Out of District: ";
        cin>>code;
        if(cin.eof())
            break;
        cout<<"Enter Amount Of Credit Hours: ";
        cin>>credit_hours;
        if(cin.eof())
            break;
   /// Uppercase         
        char upperChar = char(toupper(code));

        if(upperChar== 'I')
            tuition = credit_hours * 250.00;
        else if(upperChar == 'O')
            tuition = credit_hours * 500.00;

        total_students = total_students + 1;
        total_credits = total_credits + credit_hours;
        total_tuition = total_tuition + tuition;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Student Last Name: "<<lname<<endl;
        cout<<"District Code: "<<upperChar<<endl;
        cout<<"Credit Hours: "<<credit_hours<<endl;
        cout<<"Tuition For This Student: $"<<tuition<<endl;
        cout<<"Press Ctrl+z to Exit "<<endl;

    }

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Total Number of Students: "<<setw(10)<<total_students<<endl;
    cout<<"Total Credit Hours Taken By All Students: "<<setw(10)<<total_credits<<endl;
    cout<<"Total Tuition Owed By All Students: $"<<setw(10)<<total_tuition<<endl;

    return 0;
}