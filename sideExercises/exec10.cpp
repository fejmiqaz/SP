#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that will read unknown number of three integers, and for each triple (a, b, c) will print the number
 * (a or b) that contains the digit c more times on even positions (the positions are counted from right to left,
 * and the first position is 1). */

int main(){

    int a,b,c;
    while(cin >> a >> b >> c){
        int c1 = 0, c2 = 0;
        int position = 1, tmp = a;
        while(tmp > 0){
            int digit = tmp % 10;
            if(position % 2 == 0 && digit == c){
                c1++;
            }
            tmp/=10;
            position++;
        }

        position = 1;
        int tmp1 = b;

        while(tmp1>0){
            int digit = tmp1 % 10;
            if(position % 2 == 0 && digit == c){
                c2++;
            }
            tmp1 /= 10;
            position++;
        }
        if(c1 > c2){
            cout << a << endl;
        }else{
            cout << b << endl;
        }
    }

    return 0;
}