#include <iostream>

using namespace std;

int main() {
    /*  Write a program where a 5 digit number is entered from standard input. The program prints 1 if the number
    is special, and 0 otherwise. A number is considered special if it is divisible by the sum of its second and third digits,
     and the first, third and the fifth digits are in a strictly ascending order.
     Be careful about division by 0, print -1 in such a case. */

    int num;
    cout << "Enter a 5-digit number: ";
    cin >> num;

    if (num < 10000 && num > 99999) {
        cout << "-1" << endl;
        return 1;
    }

    int firstNum = num / 10000;
    int secondNum = (num / 1000) % 10;
    int thirdNum = (num / 100) % 10;
    int fourthNum = (num / 10) % 10;
    int fifthNum = num % 10;

    if (secondNum + thirdNum == 0) {
        cout << "-1" << endl;
    } else if(firstNum < thirdNum && thirdNum < fifthNum && num % (secondNum + thirdNum) == 0 && secondNum + thirdNum != 0) {
        cout << "1" << endl;
    } else {
        cout << "0" << endl;
    }


    return 0;
}
