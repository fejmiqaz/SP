#include<iostream>

using namespace std;

/* A number X is entered from standard input, then the numbers are entered until something other than a number is entered.
 * For each of the entered numbers check if the number of digits is equal to the number of digits in X.
 * For each of the entered number, if the condition is met, print the number.*/

int main() {
    int x, number, i, j;
    cin >> x;

    while(cin >> number){
        int tmp1 = x, tmp2 = number;
        for(i = 0; tmp1 != 0; i++){
            tmp1/=10;
        }
        for(j = 0; tmp2!=0; j++){
            tmp2/=10;
        }
        if( i == j){
            cout <<number<<endl;
        }
    }

    return 0;
}


/* int x, number;
    cin >> x;
    while (cin >> number) {
        int tmp1 = x, tmp2 = number, i, j;

        for (i = 0; tmp1 != 0; i++) {
            tmp1 /= 10;
        }
        for (j = 0; tmp2 != 0; j++) {
            tmp2 /= 10;
        }
        if( i == j) {
            cout << number << endl;
        }

    } */

