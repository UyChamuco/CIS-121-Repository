#include <iostream>
using namespace std;

int main(){

// user enters two exam scores

// exam 1 worrth 60% of final grade, exam 2 worth 40% of final grade

double exam1, exam2, finalGrade;

////

cout<< "Enter score for Exam 1 :";
cin>> exam1;
cout<< "Enter score for Exam 2 :";  
cin>> exam2;

/// calculate final grade
finalGrade = (exam1 * 0.6) + (exam2 * 0.4);
cout<< "Your final grade is: " << finalGrade << endl;

if (finalGrade >=75){
    cout<< "Congratulations! You passed.\n";
}
else{
    cout<< "Better luck next time!\n";
    
}

    return 0;
}