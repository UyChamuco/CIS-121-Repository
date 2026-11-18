#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

/// global variables //was in int main
struct student
{
    string fname;
    string lname;
    float gpa;
};

void display_student(student mystudent[]) //function to display student information
{ 
    int i ;

    cout<<setprecision(2)<<fixed;

    for(i=0; i<10; i++)
    {
        cout<<endl;
        cout<<"Student: "<<mystudent[i].fname<<" "<<mystudent[i].lname<<endl;
        cout<<"GPA: "<<mystudent[i].gpa<<endl;
    }
}

int main() ////def of an object is called a class
{

    student mystudent[10];
    int i = 0;

    ifstream infile;

    infile.open("studentss.txt");

    while(!infile.eof())
    {
        infile>>mystudent[i].fname>>mystudent[i].lname>>mystudent[i].gpa;
        i = i + 1;
        
    }

    infile.close();

    display_student(mystudent); //function call to display student information
    
    return 0;
}