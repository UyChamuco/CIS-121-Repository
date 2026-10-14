#include <iostream>
#include <iomanip>
using namespace std;

float detTuition(float credits)
{
    float tuition;
    tuition = credits * 250.00;
    return tuition;

}

int main()
{
    float tuition, credits;
    float tuition_total = 0;
    int students = 0;
    string lname;

    cout<<"Enter Student name: [or press Ctrl+Z to exit] ";
    cin>>lname;

    while(!cin.eof())
    {
        cout<<"Enter credits taken: ";
        cin>>credits;


        tuition = detTuition(credits);
        tuition_total = tuition_total + tuition;
        students = students + 1;

        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Student: "<<lname<<endl;
        cout<<"Credit Hours: "<<credits<<endl;
        cout<<"Tuition Total for semester: $"<<tuition<<endl;

        cout<<"Enter Student name: [or press Ctrl+Z to exit] ";
        cin>>lname;
    
    }
        cout<<endl;
        cout<<setprecision(2)<<fixed<<endl;
        cout<<"************************************"<<endl;
        cout<<"Tuition Total: $"<<setw(10)<<tuition_total<<endl;
        cout<<"Students Total: "<<setw(10)<<students<<endl;
        cout<<"Thank You For Using Our Program! "<<endl;

    return 0;
}