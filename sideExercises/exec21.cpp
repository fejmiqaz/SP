#include<iostream>
using namespace std;

/* The length of an array N (N<100) and the elements of the array are read from SI.
 * Write a program that will transform the array in such a way that all even numbers will be moved to the beginning of
 * the array in the same order as they occur in the array and all the odd numbers will follow after the even numbers but
 * in the reverse order than the order in which they occur in the original array. The transformation of the array needs
 * to be done with a separate function. The transformed array should be printed on SO.
Example.
Original array: 5 2 7 12 3 5 10
Transformed array: 2 12 10 5 3 7 5
Explanation: 2,12 and 10 are even numbers so they are the first three elements in the transformed array.
 5,7,3,5 are the odd numbers and they follow after the even numbers but in the reverse order. */

void transform(int * f, int n){
    int evens[100];
    int odds[100];
    int j=0,k=0;

    for(int i = 0; i < n; i++){
        if(f[i] % 2 == 0){
            evens[j++] = f[i];
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(f[i] % 2 == 1){
            odds[k++] = f[i];
        }
    }
    for(int i = 0; i < n; i++){
        f[i] = evens[i];
    }
    for(int i = 0; i < n; i++){
        f[i+j] = odds[i];
    }
}

int main(){

    int n, f[100], q[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    transform(f,n);
    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }
    cout << endl;


    return 0;
}
