#include<iostream>
using namespace std;

int main() {
    // Write a program with which the user should enter 3 positive numbers at the input, and the output
    // should print which of the inputs has the smallest value. If all the numbers have the same value, a message
    // should be printed that it's about the same numbers.

    int number;
    cin >> number;

    int n1 = number / 100;
    int n2 = (number / 10) % 10;
    int n3 = number % 10;

    if ( (n1 < n2) && ( n1 < n3)) {
        cout << "The first number has the smallest value." << endl;
    } else if ( (n2 < n1) && (n2 < n3)) {
        cout << "The second number has the smallest value." << endl;
    } else if ( (n3 < n1) && (n3 < n2)) {
        cout << "The third number has the smallest value." << endl;
    } else {
        return 0;
    }




    return 0;
}