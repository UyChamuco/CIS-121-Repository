#include <iostream>
#include <fstream>
using namespace std;

///  array open file
void load_arrays(string city[], int population[])
{
    ifstream infile;
    int i = 0;

    infile.open("cities.txt");

    while(!infile.eof())
    {
        infile>>city[i]>>population[i];
        i = i + 1;
    }

    infile.close();
}

//array/ display and count/ string search name has been included
void display_arrays(string city[], int population[])
{
    int i = 0;

    for(i = 0; i<8; i++)

    {   cout<<endl;
        cout<<"City:           "<<city[i]<<endl;
        cout<<"Population:     "<<population[i]<<endl;
    }
}

void search_arrays(string city[], int population[], string search_city)
{
    int i = 0;
    bool found_flag = false;

    for(i = 0; i<8 && found_flag==false; i++)
    {
        if(search_city==city[i])
        {
            cout<<endl;
            cout<<"City: "<<city[i]<<endl;
            cout<<"Population: "<<population[i]<<endl;
            found_flag = true;
        }
    }

    if(found_flag == false)
    {
        cout<<"City not found."<<endl;
    }
}

///  
int main()
{
    string city[8];
    int population[8];
    fstream infile;
    string search_city;

//call arrays
    load_arrays(city, population);
    display_arrays(city, population);

//loop intitiation
    cout<<"\nEnter City Name or press [Ctrl+Z] to Exit: "<<endl;
    cin>>search_city;

//while loop
    while(!cin.eof())
    {
        search_arrays(city, population, search_city);


        cout<<"\nEnter City Name or press [Ctrl+Z] to Exit: "<<endl;
        cin>>search_city;
    }

    cout<<"Thank You. Have a nice day!"<<endl;


    return 0;
}
