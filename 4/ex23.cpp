#include<iostream>
using namespace std;

/* Alexandar tries to communicate via encrypted messages. He gives us the following instructions on how to decipher the
 * numbers he wants to send us to make them readable.
 * For a given number entered on standard input, reverse the same. At the same time, the character x is also entered, for which
 * all the digits in the even positions of the number should be replaced with that character.
 * To print the reversed number with the even position character.
 * Note: The rightmost digits is winter as the 0th digit.
 * Example: the number 12345 has even digits 5,3,1; and inverted 54321.*/

bool reversed(int x, int y)

int main() {
    int number, reversed = 0;
    cin >> number;
    while (number>0){
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    for (int i = 0; i < number; i++){
        char x;
        cin >> x;
    }

    return 0;
}