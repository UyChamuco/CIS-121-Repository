#include <iostream>
#include <iomanip>
using namespace std;

/// percent of gratutity
const float tip_percent = 0.15;

int main(){

/// Meal cost and tip amount
float meal_Cost, tip_Amount, totalCost;

cout << "Enter the cost of your meal: $";
cin >> meal_Cost;

tip_Amount = meal_Cost * tip_percent;
totalCost = meal_Cost + tip_Amount;

cout << "Meal cost: $" << setprecision(2) << fixed << meal_Cost << endl;
cout << "Tip amount: $" << setprecision(2) << fixed << tip_Amount << endl;
cout<< "____________________"<< endl;
cout << "Total cost of outing: $" << setprecision(2) << fixed << totalCost<< "\n"<< endl;

return 0;
}