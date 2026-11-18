#include <iostream>
#include <fstream>
#include <string>
using namespace std;

///arrays
void load_array(string name[], string lname[], float salary[])
{
    ifstream infile;
    int i = 0;

    infile.open("Employees.txt");

    while(!infile.eof())
         {
            infile>>name[i]>>lname[i]>>salary[i];
            i = i + 1;
        }


    infile.close();

}

void display_array(string name[], string lname[], float salary[])
{
    int i = 0;

    for(i=0; i<10; i++)

   cout<<name[i]<<" "<<lname[i]<<" "<<salary[i]<<endl;
}

void search_array(string name[], string lname[], float salary[], string search_name)
{
    int i = 0;
    bool found_flag = false;
    
    for(i=0; i<10 && found_flag==false; i++)
    {
        if(search_name==lname[i] || search_name==name[i])
        {
            cout<<"Name: "<<name[i]<<" "<<lname[i]<<" Salary: "<<salary[i]<<endl;
            found_flag = true;
        }
    }
    
    if(found_flag == false)
    {
        cout<<"Name not found."<<endl;
    }
}



int main()
{
    fstream infile;
    string name[10], lname[10];
    float salary[10];
    string search_name;

    load_array(name, lname, salary);
    display_array(name, lname, salary);

    cout<<"\nEnter Last Name or press [Ctrl+Z] to Exit: ";
    cin>>search_name;

    while(!cin.eof())
    {
  
        search_array(name, lname, salary, search_name);

        cout<<"\nEnter Last Name or press [Ctrl+Z] to Exit: ";
        cin>>search_name;
        

    }


    return 0;
}