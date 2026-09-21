#include <iostream>
#include <iomanip>
using namespace std;
// number of books, price per book
// if number of books ordered > $50 then shipping = 0

int main (){

int books;
float price_per_book,total,shipping,extended_price;
    

    cout<<"Enter amount of books to purchase:  ";
    cin>> books;
    cout<<"Enter Cost per book:             $";
    cin>> price_per_book;

extended_price = books * price_per_book;

if(extended_price>=50)
    shipping = 0;

else
    shipping = 25.00;

total = extended_price + shipping;


    cout<<"Book(s) Ordered:  "<<books<<endl;
    cout<<"Price Per Book:  $"<<price_per_book<<endl;
    cout<<"Shipping Cost:   $"<<shipping<<endl;
    cout<<"Total cost:      $"<<total<<endl;

    return 0;
}