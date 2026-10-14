#include <iostream>
#include <iomanip>
using namespace std;

float DetBonusRate(char joblevel)
{
    float bonusRate;

    if (joblevel == 'H')
        bonusRate = 0.20f;
    else if (joblevel == 'M')
        bonusRate = 0.15f;
    else
        bonusRate = 0.10f;

    return bonusRate;
}

float CompBonus (float salary, float bonusRate)
{
    float bonus;

    bonus =  bonusRate * salary;

    return bonus;

}

int main ()
{
    // define variables
    char joblevel;
    float salary, bonusRate, bonus, avgBonus;
    float totalBonus = 0.0;
    float totalEmployees = 0.0;
    string lname;

    /// input Phase

    cout<<"Enter employee last name";
    cin>>lname;

    while(!cin.eof())
    {
        cout<<"Enter annual salary";
        cin>>salary;
        cout<<"Enter job level: [H, M, All others...]" ;
        cin>>joblevel;

        bonusRate = DetBonusRate(joblevel);
        bonus = CompBonus(salary, bonusRate);

        totalBonus = totalBonus + bonus;
        totalEmployees = totalEmployees + 1;

        cout<<setprecision(2)<<fixed;
        cout<<endl;
        cout<<"Employee: "<<setw(10)<<lname<<endl;
        cout<<"Salary: "<<setw(10)<<salary<<endl;
        cout<<"Job level: "<<setw(10)<<joblevel<<endl;
        cout<<"Bonus Rate: "<<setw(10)<<bonusRate<<endl;
        cout<<"Bonus amount: "<<setw(10)<<bonus<<endl;


        cout<<"Enter employee last name, crtl+z to stop";
        cin>>lname;

    }

    avgBonus = totalBonus/totalEmployees;

    cout<<endl;
    cout<<"Total Bonuses: $"<<setw(10)<<totalBonus<<endl;
    cout<<"Total employees: "<<setw(10)<<int(totalEmployees)<<endl;
    cout<<"Average bonus: "<<setw(10)<<avgBonus<<endl;


    return 0;
}