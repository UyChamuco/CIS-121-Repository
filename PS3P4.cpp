#include <iostream>
#include <iomanip>
using namespace std;
 int main (){

// price of stock when purchased

/// current stock price

float original_price, current_price, percentage_change;


cout<< "Enter price of stock when purchased: $";
cin>> original_price;
cout<< "Enter current price of stock: $";
cin>> current_price;

////calculate percentage change

percentage_change = ((current_price - original_price) / original_price) * 100;

if (percentage_change > 0){
    cout<< "The stock has increased by " << setprecision(2) << fixed << percentage_change << "% since it was purchased. \n";
}
else if (percentage_change < 0){
    cout<< "The stock has decreased by " << setprecision(2) << fixed << percentage_change << "% since it was purchased. \n";
}
else{
    cout<< "The stock price has not changed since it was purchased. \n";
}

return 0;
 }