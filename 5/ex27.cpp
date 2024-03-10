#include<iostream>
using namespace std;

/* Write a program that reads two natural numbers, a start and an end, from the standard input. The program should print
 * the largest palindrome in the range [start, end] as output.
The solution should be implemented using three functions:
- reverse(int number) - a function to calculate the reversed number (for example, for 123, it should return 321)]
- isPalindrome(int number) - a function that checks if a number reads the same from left to right and from right to left.
- findLargest(int start, int end) - a function that finds the largest palindrome in the range [start, end]. */

int reverse(int number){
    int reversed = 0;
    while(number > 0){
        int digit = number % 10;
        reversed = (reversed * 10) + digit;
        number/=10;
    }
    return reversed;
}
bool palindrome;
int isPalindrome(int number){
    palindrome = false;
    if(number== reverse(number)){
        palindrome = true;
    }
    return number;
}

int findLargest(int start, int end){
    int largest = 0;
    for(int i = start; i < end; i++){
        isPalindrome(i);
        if(palindrome){
            largest = i;
        }
    }
    cout << largest;
    return 0;
}

int main(){
    int f,q;
    cin >> f >> q;
    findLargest(f,q);
    return 0;
}
