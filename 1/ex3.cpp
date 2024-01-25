#include<iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    int leftmostNum = number % 10000;
    int rightmostNum = leftmostNum / 10;
    int firstNum = number / 10000;
    int lastNum = number % 10;

    float sum = firstNum + lastNum;

    cout << rightmostNum <<endl;
    cout << sum << endl;

    return 0;
}


