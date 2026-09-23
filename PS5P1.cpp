#include <iostream>
using namespace std;

int main()
{


    char grade;
    int score;
    string lname;

    cout<<"Enter your last name: ";
    cin>>lname;
    cout<<"Enter your score:     ";
    cin>>score;

    if (score >= 90)
        grade = 'A';
    else if(score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if(score >=60)
        grade = 'D';
    else
        grade = 'F';

    cout<<"Hello, " <<lname<<endl;
    cout<<"Your grade is: "<< grade<<endl;



    return 0;
}