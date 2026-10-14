#include <iostream>
#include <iomanip>
using namespace std;

//function
float detLabFee(string department, int CourseCode)
{
    float labFee;

    if(department == "CIS" && CourseCode == 101)
        labFee = 50.00;
    else if(department == "CIS" && CourseCode == 121)
        labFee =100.00;
    else if(department == "MAT" && CourseCode == 111)
        labFee = 25.00;
    else if(department == "MAT" && CourseCode == 112)
        labFee = 35.00;
    else if(department == "ENG" && CourseCode == 100)
        labFee = 55.00;
    else
        labFee = 50.00;

    return labFee;

}

/// main
int main()

{//define variables
    string department,name;
    int CourseCode;
    float labfee, avglabFee;
    float total_LabFee = 0;
    int total_students = 0;

    cout<<"Student Name or [press Ctrl+Z to exit]: "<<endl;
    cin>>name;

//loop input
    while(!cin.eof())
    {
        cout<<"Enter department code: [CIS, MAT, ENG...]";
        cin>>department;
        cout<<"Enter Course Code: [100, 101, 234....] ";
        cin>>CourseCode;

///computations/loop
        labfee = detLabFee(department, CourseCode);
        total_LabFee = total_LabFee + labfee;
        total_students = total_students + 1;

///output/loop
        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"Student:         "<<setw(10)<<name<<endl;
        cout<<"Department code: "<<setw(10)<<department<<endl;
        cout<<"Course Code:     "<<setw(10)<<CourseCode<<endl;
        cout<<"Lab Fee:        $"<<setw(10)<<labfee<<endl;

//choose to terminate program;
        cout<<"Student Name or [press Ctrl+Z to exit]: "<<endl;
        cin>>name;

    }

//output
    avglabFee = total_LabFee/total_students;

    cout<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"********************"<<setw(10)<<endl;
    cout<<"Total Lab Fees: $"<<setw(10)<<total_LabFee<<endl;
    cout<<"Average Lab Fee: $"<<setw(10)<<avglabFee<<endl;


    return 0;
}