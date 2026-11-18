#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void load_arrays(string fname[], string lname[], float gpa[])
{
  ifstream infile;
  int i = 0;
  

  infile.open("studentss.txt");

  while(!infile.eof())
  {
    infile>>fname[i]>>lname[i]>>gpa[i];
    i = i + 1;
    //accidentally typed i instead of 1//corrected

  }

  infile.close();

}

void displayarrays(string fname[],string lname[], float gpa[])
{
    int i = 0;

    for(i =0; i<10; i++)
    {
        cout<<endl;
        cout<<setprecision(2)<<fixed;
        cout<<"Student: "<<fname[i]<<" "<<lname[i]<<endl;
        cout<<"GPA: "<<setw(2)<<gpa[i]<<endl;
    }
}


void backwards_array(string fname[], string lname[], float gpa[])
{
  int i = 10;
  
  for(i = 9;i>0;i--)
  {
      cout<<endl;
      cout<<setprecision(2)<<fixed;
      cout<<"Student: "<<fname[i]<<" "<<lname[i]<<endl;
      cout<<"GPA: "<<setw(2)<<gpa[i]<<endl;
  }
}


int main()
{
    string fname[10], lname[10];
    float gpa[10];
    fstream infile;

    load_arrays(fname, lname, gpa);
    displayarrays(fname, lname, gpa);
    cout<<"****** BACKWARDS BREAK: *****"<<endl;

    backwards_array(fname, lname, gpa);

    return 0;
}

