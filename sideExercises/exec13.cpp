#include<iostream>
#include<cstring>
using namespace std;

/* Let A = {a1, a2, .. a_n} is an array of integers. The size of the array n and the elements of the array are read from SI.
 * Write a program that will transform the array so each element of the original array is replaced with the number of
 * appearance of the least significant digit (the right most) in the number itself. Print the result array on the standard output.

Compute the count of given digit in a number with separate recursive function.

Example:

Input:
5
1 11 1121 111222112 22222
Output:
1 2 3 4 5
 Input:
 3
18181818 900003 505
 Output:
 4 1 2*/

void countOccurrence(int f[100], int n){
    if(n == 0){
        return ;
    }
    int tmp = f[n - 1];
    int ld = tmp % 10;
    int counter = 0;
    while(tmp != 0){
        int digit = tmp % 10;
        if(digit == ld){
            counter++;
        }
        tmp/=10;
    }

    countOccurrence(f,n-1);
    cout << counter << " ";
}

int main(){

    int f[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    countOccurrence(f,n);
    return 0;
}