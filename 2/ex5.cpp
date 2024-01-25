#include<iostream>
using namespace std;

int main() {
    /* Check if a specific inputted six-digit number is symmetric. This means that the first digit of the number
     should be the same as the last, the second should be the same as the second-to-last, and so on. For example
     symmetric numbers are: 123321, 890098, 999999. If the number is symmetric print 1, otherwise print 0.
     */
     int number;
     cin >> number;

     int firstNum = number / 100000, lastNum = number % 10;
     int secondNum = (number / 10000) % 10, secondToLastNum = (number % 100) / 10;
     int thirdNum = (number / 1000) % 10, fourthNum = (number % 1000) / 100;

     if ( firstNum == lastNum && secondNum == secondToLastNum && thirdNum == fourthNum) {
        cout << "1" << endl;
     } else {
        cout << "0" << endl;
     }

    return 0;
}
