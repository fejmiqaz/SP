#include<iostream>
#include<cmath>
using namespace std;

/* Write a program that for a given N numbers in an array, will check whether the pair that is next to each other
 * is a prime number.
 * NOTE: The array is made up of digits 0 to 9.
 * EX:
 * 11
 * 1 7 4 0 2 1 8 1 1 3 7
 * OUTPUT:
 * number 17 is a prime number
 * number 40 is not a prime number
 * number 21 is not a prime number
 * number 81 is not a prime number
 * number 13 is a prime number
 * number 7 is a prime number */

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void pairs(int a[], int size){
    int i;
    for( i = 0; i < size - 1; i+=2){
        int pair = a[i] * 10 + a[i + 1];
        if(prime(pair)){
            cout << "the number: " << pair << " is a prime number" << endl;
        }else{
            cout << "the number: " << pair << " not a prime number " << endl;
        }
    }
    if(i == size - 1 || i == size - 2){
        if(size % 2 != 0){
            cout << a[size-1] << " is a single number and can't be checked for primality" << endl;
        }
        return;
    }
}

int main(){

    int n, f[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
        if(f[i] > 9 || f[i] < 0 ){
            cout << "Enter a number that's from 0 to 9" << endl;
            return 0;
        }
    }
    pairs(f,n);

    return 0;
}