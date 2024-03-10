#include<iostream>
using namespace std;

/* Write a program that will read two natural numbers. The program should check if the digits in the odd position of the number
 * are in the even position in the second number. If this condition is met the program prints DA otherwise NE.
 * The first digit is in the 0th position starting from the left. */

bool checkDigits(int x, int y){
    while( x > 0){
        int digit = x % 10;
        x /= 10;
        if(digit % 2 == 0 != y % 2 == 0){
            return false;
        }
        y/=10;
    }
    return true;
}


int main() {
    int a, b;
    cin >> a >> b;
    if(checkDigits(a,b)){
        cout << 1 << endl;
    }else{
        cout << 0;
    }
    return 0;
}
