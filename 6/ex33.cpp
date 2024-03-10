#include<iostream>

using namespace std;

/* From SI a number n is entered, then read n elements of an array.
 * Transform the array in a way such that elements in even positions will be multiplied by 2, and elements in odd
 * positions will be increased by 2.
 * Print the array and separate the elements by space between them.
 * EX:
 * 5
 * 1 2 3 4 5
 * Output:
 * 2 4 6 6 10*/

int main() {

    int n, f[100]; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    for(int i = 0; i < n; i += 2){
        f[i] *= 2;
    }
    for(int i = 1; i < n; i += 2){
        f[i] += 2;
    }
    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }
    cout << endl;



    return 0;
}
