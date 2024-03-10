#include <iostream>
using namespace std;

/* Write a program to evaluate students based on their academic achievements. The program should perform the following tasks:
 1. Check the following conditions:
 - The program checks if the entered data is valid and if the student has more than 100 credits and an average grade  higher than 8.
 If the conditions are met, the following calculations are made:
 -- Points are calculated as: Points = number of credits / predicted credits * 10 + (AVG - 8.5) * 6.5.

 -If the student has more than 240 credits, "Needs to graduate!" is displayed as additional information.
 If the student's average grade is greater than 9, "Great student!" is displayed as additional information.
 > Alternatively, if the conditions are not met, the program sets the points to 0.

 The program reads the number of credits (int), year of enrollment (2010-2023), and an average(decimal number) from SI.
 It should print the student's points and the relevant additional message (if necessary).*/

int main() {
    int credits, yearOfEnrollment;
    float avg;
    cin >> credits >> yearOfEnrollment >> avg;

    yearOfEnrollment = (2023 - yearOfEnrollment) * 60;

    if(credits > 100 && avg >= 8.5){
        float points = (credits / 240) * 10 + (avg-8.5) * 6.5;

        if(credits > 240) {
            cout << "Has to graduate" << endl;
        }else if(avg > 9){
            cout << "great student" << endl;
        } else{
            cout << 0;
        }

        cout << "Your points are: " << points << endl;
    }

    return 0;
}
