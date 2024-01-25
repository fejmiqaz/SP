#include<iostream>
using namespace std;

/* Numbers m, n and p are read from SI. Find the first 10 numbers greater than m, that contain the digit n p-times.
 * Implement the solution using a function countOccurrence(int number, int digit) that takes two arguments, a number and
 * a digit, ad returns the count of how many times the digit occurs in the number.*/
int countOccurrence(int num, int digit){
    int counter = 0;
    while(num > 0){
        int digit1 = digit % 10;
        if(digit == digit1){
            counter++;
        }
        num/=10;
    }
    cout << counter;
}

int main(){
    int m, n, p;
    cin >> m >> n >> p;
    int counter = 0;
    while(counter < 10){
        m++;
        int ret= countOccurrence(m,n){
            if(ret == p){
                cout << m << endl;
                counter++;
            }
        }
    }

    return 0;
}
/* int countOccurrence(int num, int digit){
    int counter = 0;
    while(num > 0){
        int digit1 = num % 10;
        if(digit1 == digit){
            counter++;
        }
        num/=10;
    }
    return counter;
} */