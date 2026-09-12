#include <iostream>
using namespace std;



int main(){

//trying to figure out breakeven point for business expenses and revenue

// fixed costs, price per unit, cost per unit, and breakeven point
double fixed_costs, price_per_unit, cost_per_unit, breakeven;

///////

cout<< "Enter fixed business costs: $";
cin>> fixed_costs;
cout<< "Enter price per unit sold: $";
cin>> price_per_unit;
cout<< "Enter cost per unit bought: $";
cin>> cost_per_unit;

// Calculate breakeven point
breakeven = fixed_costs / (price_per_unit - cost_per_unit);

// Display the result
cout<< "To break even, you need to sell " << breakeven << " units." << endl;


return 0;
}