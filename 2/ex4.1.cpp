#include<iostream>
using namespace std;

int main() {
    //Write a program in which 3 integers are entered. If they are in ascending order, print 1.
    // If they are in descending order, print -1. If otherwise print 0.
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if ((num1 < num2) && (num2 < num3)) {
        cout << "1" << endl;
    } else if ((num1 > num2) && (num2 > num3)) {
        cout << "-1" << endl;
    } else {
        cout << "0" << endl;
    }



    return 0;
}