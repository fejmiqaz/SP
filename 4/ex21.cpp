#include<iostream>

using namespace std;

/* Write a program that reads two natural numbers, start and end, from standard input.
 * Then the program should find and print the palindromes in the range [start, end].
 * A palindrome is defined as a number that remains the same even when its digits are in reverse order.
 * Your task is to find the smallest and largest palindromes in the given range. */

bool palindrome(int num) {
    int original = num;
    int reversed = 0;
    while (num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}
int main() {
    int start, end;
    cin >> start >> end;
    for(int i = start; i < end; i++){
        if(palindrome(i)){
            cout << i << endl;
        }
    }
    return 0;
}