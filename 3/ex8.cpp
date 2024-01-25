#include <iostream>
using namespace std;

// IMPORTANT !!!!

/* Write a program that will print the sum of all numbers divisible by 3 in the interval [A,B), where A and B are entered
 from the keyboard. Explanation: A = 10, B = 20. The numbers that belong to the interval are 10, 11, 12, 13, ... 19.
 Among them, the numbers divisible by 3 are 12, 15, 18, so their sum is 45.*/

int main() {
    int A, B, sum = 0;

    cin >> A >> B;

    for(int i = A; i < B; i++){
        if (i % 3 == 0 && i % 2 != 0){
            sum += i;
        }
    }
    cout << sum;

    return 0;
}
