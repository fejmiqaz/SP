#include<iostream>
using namespace std;

/* To define and implement the following functions:
 * 1. int reverseNumber(int num) - a function that takes one argument, num, and returns its reverse. Ex. for the number
 * 1234, the function should return 4321.
 *
 * 2. int sumOfDigits(int num) - a function that takes one argument, num, returns the sum of its digits. Ex. for the number
 * 1234, the function should return 10(1+2+3+4=10).
 *
 * 3. void printInterval(int f, int q) - a function that takes two arguments, f and q, and doesn't return anything since its a void
 * The purpose of this function is to int all numbers in the interval f to b (including both), for which the number X is
 * divisible by the reverse of the sum of its digits. Use the first two functions to implement this one.
 *
 * Example for such a number:
 * For 992, the sum of its digits it's 9+9+2=20. The reverse of the sum of it's digits is 20 -> 2. Since 992 is divisible
 * by 2, it fulfills the condition.*/
int reverse(int num){
    int reversed = 0;
    while(num > 0){
        int digit = num % 10;
        reversed = (reversed * 10 ) + digit;
        num/=10;
    }
    return reversed;
}
int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum += digit;
        num/=10;
    }
    return sum;
}
void printInterval(int f, int q){
    for(int i = f; i < q; i++){
        int sum = sumOfDigits(i);
        if(i % reverse(sum) == 0){
            cout << i << " ";
        }
    }
}

int main(){

    int a,b;
    cin >> a >> b;
    printInterval(a,b);

    return 0;
}

/* int reverseNumber(int numb){
    int reversed = 0;
    while(numb > 0 ){
        int digit = numb % 10;
        reversed = (reversed * 10) + digit;
        numb /= 10;
    }
    return reversed;
}
int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
void printInInterval(int f, int q){
    for (int i = f; i < q; i++){
        int sum = sumOfDigits(i);
        int reverse = reverseNumber(sum);
        if(i % reverse == 0){
            cout << i << endl;
        }
    }
}

 int a, b;
    cin >> a >> b;
    printInInterval(a,b);
 */