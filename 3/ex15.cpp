#include<iostream>
using namespace std;

/* Points earned from 5 activities for one subject are read for one student. A condition for a subject
 * to be passed is to have over 50 points. If the student has 0-50 points, he has not passed.
 * if he has 51-60 he has passed with a 6, if he has 61-70 he has passed with 7, 71-80 with 8
 * if he has 81-90 he has passed with 9, and he has passed with 10 if he has over 90 points.
 * Print the grade that the student has gotten, their points and print "Has potential for a higher grade"
 * if they lack just 1 point for a higher grade, otherwise print "Try harder for a higher grade next time!"*/

int main() {
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;

    int sum = a1 + a2 + a3 + a4 + a5;

    if (sum <= 50){
        cout << "You have failed." << endl;
    } else if (sum > 50  && sum <= 60 ) {
        cout << "Ocenka: " << 6 << " points: " << sum << endl;
    }else if ( sum > 60 && sum <= 70) {
        cout << "Ocenka: " << 7 << " points: " << sum << endl;
    } else if ( sum > 70 && sum <= 80) {
        cout << "Ocenka: " << 8 << " points: " << sum << endl;
    } else if (sum > 80 && sum <= 90){
        cout << "Ocenka: " << 9 << " points: " << sum << endl;
    } else {
        cout << "Ocenka: " << 10 << " points: " << sum << endl;
    }

    sum = sum % 10;
    if (sum == 0){
        cout << "Ima uslov za povisoka ocenka";
    } else if (sum != 0){
        cout << "Nema uslov za povisoka ocenka";
    }
    return 0;
}

