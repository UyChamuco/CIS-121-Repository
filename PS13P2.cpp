#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

/// structure of student
struct student
{
    string name;
    string lname;
    float gpa;
};

/// 
int main()
{   
    int numStudents; //used to enter number of students
    ifstream infile;

    //open file
    infile.open("PS13Students.txt");

    if(!infile)
    {
        cout<<"Error Opening File."<<endl;
        return 1;
    }
/// get line if file opens successfully
    cout<<"Enter Number of Students: ";
    cin>>numStudents;
///create the vector of students
    vector<student> the_students(numStudents);

//while

int count = 0;

while(count < numStudents && infile>>the_students[count].name>> the_students[count].lname>>the_students[count].gpa)
{
    count = count + 1;
}

infile.close();

///display the students:

cout<<"\n*****Students In List:*****\n"<<endl;

for(int i = 0; i < count; i++)
{
    cout<<"Student: "<<the_students[i].name<<"  "<<the_students[i].lname<<" \n"
    <<"GPA: "<<the_students[i].gpa<<endl;
}

    return 0;
}