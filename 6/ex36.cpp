#include<iostream>
using namespace std;

/* An integer N is read from SI. Then an array of N integers is read. Write a program that will transform the elements
 * of the array as follows:
 * If the element is an even number, increase it by 3, and if it's an odd number divisible by 5, subract it by 2.
 * Print the transformed array.
 * Input:
 * 7
 * 5 12 14 15 3 5 9
 * Output:
 * 3 15 17 13 3 3 9*/

int main(){

    int n, f[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    for(int i = 0; i < n; i++){
        if(f[i] % 2 == 0){
            f[i] += 3;
        }
    }for(int i = 0; i < n; i++){
        if(f[i] % 2 != 0 && f[i] % 5 == 0){
            f[i] -= 2;
        }
    }
    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }


    return 0;
}