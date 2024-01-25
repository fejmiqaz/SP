#include<iostream>
using namespace std;

int main() {
    // Write a program which 3 numbers are entered on standard input. If all numbers are the same, or all different
    // print 1, otherwise print 0.

    int number;
    cin >> number;

    int firstNum = number / 100;
    int secondNum = (number / 10) % 10;
    int thirdNum = number % 10;

    if (firstNum == secondNum && firstNum == thirdNum && secondNum == thirdNum) {
        cout << 1 << endl;
    } else if (firstNum != secondNum && firstNum != thirdNum && secondNum != thirdNum){
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    //cout << firstNum << secondNum << thirdNum << endl;


    return 0;
}