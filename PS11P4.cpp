#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void bi_weeksalary(float salary, float &bi_weekly_salary);

int main()
{
    string name;
    int employees = 0;
    float total_salaries = 0;
    float salary, avg_salary, bi_weekly_salary;
    ifstream infile;

    infile.open("empl.txt");

    while(!infile.eof())
    {
        infile>>name>>salary;
        bi_weeksalary(salary, bi_weekly_salary);
        employees = employees + 1;
        total_salaries = total_salaries + salary;

        ///outputs
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Employee:               "<<setw(10)<<name<<endl;
        cout<<"Amount Paid Bi-Weekly:  $"<<setw(10)<<bi_weekly_salary<<endl;
        cout<<"Employee Annual Salary: $"<<setw(10)<<salary<<endl;
    }

    avg_salary = total_salaries/employees;

    cout<<endl;
    cout<<"Average Salary:                $"<<setw(10)<<avg_salary<<endl;
    cout<<"Total Salary for This Session: $"<<setw(10)<<total_salaries<<endl;
    cout<<"Total Employees:                "<<setw(10)<<employees<<endl;

    infile.close();

    return 0;
}
void bi_weeksalary(float salary, float &bi_weekly_salary)
{
    bi_weekly_salary = salary/26;
}