#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string lname;
    int bats, hits;
    float hits_average;
    int total_bats = 0, total_hits = 0, players = 0;


    while (!cin.eof())

    {
        cout << "Enter Player's Last Name: ";
        cin >> lname;
        if (cin.eof())
            break;
        cout << "Enter Number of Battings: ";
        cin >> bats;
        if (cin.eof())
            break;
        cout << "Enter Number of Balls Hit: ";
        cin >> hits;
        if (cin.eof())
            break;
        //////
        players = players + 1;
        total_bats = total_bats + bats;
        total_hits = total_hits + hits;
        hits_average = static_cast<float>(total_hits) / static_cast<float>(total_bats);

        //cout<<endl;
        cout << "\nPlayer: " << lname << endl;
        cout << "Number of Bats: " << setw(10) << bats << endl;
        cout << "Number of Hits: " << setw(10) << hits << endl;
        cout << "Press Ctrl+Z to Exit " << endl;
        cout << endl;

    }

    cout << endl;
	cout << fixed << setprecision(2);
    cout << "Total Number of Players: " << setw(10) << players << endl;
    cout << "Total Number of Bats: " << setw(10) << total_bats << endl;
    cout << "Total Number of Hits: " << setw(10) << total_hits << endl;
    cout << "Average Hits per Battings: " << setw(10) << hits_average << endl;
    cout << "Thank You For Using The Batting Tracker!" << endl;

    return 0;

}