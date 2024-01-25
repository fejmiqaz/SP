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

/* int reverse(int number){ // reverse number function
    int reversed = 0; // initialize the reversed to 0
    while(number>0){ // check if it's 0
        int digit = number % 10; // remove the last digit
        reversed = (reversed * 10) + digit; // add that digit to the reversed
        number/=10; // remove that digit, and repeat the process until it's 0
    }
    return reversed; // return the reversed number
}

bool isPalindrome; // declare a flag

int Palindrome(int num) {
    isPalindrome = false; // set the flag to false
    if(num == reverse(num)){ // check if the entered number it's the same when reversed with the function
        isPalindrome = true; // set the flag to true
    }
    return num; // return that number, or you can return also the reversed number
}

int largestPalindrome(int start, int end){
    int largest = 0; // intialize the largest palindrome to 0
    for(int i = start; i <= end; i++){ // check for palindromes within given range
        Palindrome(i); // use the function to find the palindromes
        if(isPalindrome){ // if it's a palindrome
            largest = i; // add it to the largest, and replace when found a bigger palindrome
        }
    }
    cout << "Largest Palindrome is: " << largest << endl; // print the biggest palindrome
    return 0;
}
 int f,q;
    cin >> f >> q;
    largestPalindrome(f,q); // check using the function which has other functions to do the work
 */