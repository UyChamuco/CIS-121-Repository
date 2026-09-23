#include <iostream>
#include <iomanip>
using namespace std;

int main (){

/// employee lname
//hours worked
///  job code
// e == 25
//j == 20
//a == 15

string lname;
float hours,pay_rate,total;
char job_code;

cout<<"Please Enter Your Last Name:  ";
cin>>lname;
cout<<"Enter Hours Worked:   ";
cin>>hours;
cout<<"Enter Your Job Code [E,J,A]: ";
cin>>job_code;

/////

if (job_code == 'E')
    pay_rate = 25.00;
else if(job_code == 'J')
    pay_rate = 20.00;
else if (job_code == 'A')
    pay_rate = 15.00;

/// compute pay rate and hours worked
total = pay_rate *hours;

cout<<setprecision(2)<<fixed<<endl;
cout<<"Employee, "<<lname<<setw(10)<<endl;
cout<<"Hours Worked This Pay Period:  "<<hours<<setw(10)<<endl;
cout<<"For Code ["<<job_code<< "]\nEmployee Pay Rate:     $"<<pay_rate<<setw(10)<<endl;
cout<<"Total Pay For Current Week:       $"<<total<<setw(10)<<endl;

    return 0;
}
