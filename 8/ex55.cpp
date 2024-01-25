#include<iostream>
using namespace std;

/* A natural number N ( N <= 100) is read from SI. as well as an array of integers a[] with N elements.
 * Write a function par(a,n) which will return the numbered element in the array which occurs an even number of times
 * in the array.
 * If there is no such element, the function returns 0.
 * Write a program that will call the function par() for the input array a[], and will print the smallest number that
 * occurs an even number of times in the array a[].
 * Example:
 * 12 // Number N
 * 1 3 4 5 3 1 4 5 5 3 2 3 // Elements of the array
 * Output:
 * The smallest number that occurs even number of times is 1. // The function par returns 1, and prints the message.
 * Example 2:
 * 12 // Number N
 * 7 3 4 5 3 8 4 5 5 3 2 6
 * Output:
 * No elements occur an even number of times. // The function par returns 0, and prints the message.*/

void par(int f[], int n, int i = 0){
    int smallest = 0;
    bool appears = false;
    while(i < n){
        int counter = 0;
        for(int j = 0; j < n; j++){
            if(f[i] == f[j]){
                counter++;
            }
        }
        if(counter % 2 == 0 && f[i] < smallest){
            smallest = f[i];
            appears = true;
        }
        i++;
    }
    if(appears){
        cout << "The smallest number that occurs even number of times is " << smallest << "." << endl;
    }else {
        cout << "No elements occur an even number of times." << endl;
    }
    return ;
}

int main() {
    int n, f[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    par(f,n);
    return 0;
}