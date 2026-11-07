#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void comp_tuition(char code, float credits, float &tuition_owed, float &course_fees, float &cost_per_credits, float &tuition);

int main()
{
    string name;
    float tuition_total = 0;
    int students = 0;
    float credits, tuition_owed, course_fees, cost_per_credits, avg_tuition, tuition;
    char code;
    ifstream infile;

///open file
    infile.open("student.txt");

    while(!infile.eof())
    {
        infile>>name>>code>>credits;
        comp_tuition(code, credits, tuition_owed, course_fees, cost_per_credits, tuition);
        students = students + 1;
        tuition_total = tuition_total + tuition_owed;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Student:                    "<<setw(10)<<name<<endl;
        cout<<"Student Code:               "<<setw(10)<<code<<endl;
        cout<<"Cost Per Credit Hour:      $"<<setw(10)<<cost_per_credits<<endl;
        cout<<"Credits Taken:              "<<setw(10)<<credits<<endl;
        cout<<"Course Fees:               $"<<setw(10)<<course_fees<<endl;
        cout<<"Tuition Owed Total:         $"<<setw(10)<<tuition_owed<<endl;
    }

    ////out of loop
    avg_tuition = tuition_total/students;

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Total Tuition Cost For This session: $"<<setw(10)<<tuition_total<<endl;
    cout<<"Average Tuition Cost:                $"<<setw(10)<<avg_tuition<<endl;
    cout<<"Number of Students:                  "<<setw(10)<<students<<endl;
///close file
    infile.close();

    return 0;
}

void comp_tuition(char code, float credits, float &tuition_owed, float &course_fees, float &cost_per_credits, float &tuition)
{
    //float cost_per_credits;
    if(code == 'I')
        cost_per_credits = 250.00;
    else if(code == 'O')
        cost_per_credits = 500.00;
        
    tuition = cost_per_credits * credits;
    course_fees = tuition * 0.10f;
    tuition_owed = tuition + course_fees;

}