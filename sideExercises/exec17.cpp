#include<iostream>
#include<cstring>
using namespace std;

/* N positive integers are entered from the standard input and are stored in an array (N <100). All elements that meet
 * the next criteria should be presented on the standard output in the same order that they have appeared on the standard input.
 * The criteria is following: the most important digit (the digit on the first place) is odd and the least important digit is even.
 * If, no such number was entered, you should print out "No such elements!" message.
 * The implementation of checking the criteria should be performed in a separate function (recursive function for additional 5 points). */



int main(){

    int f[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    for(int i = 0; i < n; i++){
        if(f[i-1] % 2 != 0 && f[i] % 2 == 0){
            cout << f[i] << endl;
        }
    }

    return 0;
}