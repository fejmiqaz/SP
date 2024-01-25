#include<iostream>
#include<cstring>
using namespace std;

/* Write a recursive function that will find the number of odd numbers of an array of integers.
 * The function accepts as an arguments the array for which the number of odd numbers is required and the total number
 * of elements in the array. The function is given with the following prototype:
int Odd (int a [], int n); */



int main(){

    int f[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int counter = 0;
    for(int i = 0; i < n;i++){
        if(f[i] % 2 != 0){
            counter++;
        }
    }
    cout << counter;
    return 0;
}