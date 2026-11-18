#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void load_array(string make[], string model[], int MSRP[])
{
    int i = 0;
    ifstream infile;

    infile.open("makemodel.txt");

    while(!infile.eof()) // forgot to place while loop
    {
        infile>>make[i]>>model[i]>>MSRP[i];
        
        i = i + 1;

    }

    infile.close();

}

void display_array(string make[], string model[], int MSRP[])
{
    int i;

    for(i=0;i<10;i++)
    {
        cout<<endl;
        cout<<"Make and model:"<<make[i]<<" "<<model[i]<<endl;
        cout<<"MSRP: "<<MSRP[i]<<endl;
    }
}

int main()
{
    fstream infile;
    string make[10], model[10];
    int MSRP[10];

    load_array(make, model, MSRP);
    display_array(make, model, MSRP);


    return 0;
}