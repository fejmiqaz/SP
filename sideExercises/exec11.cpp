#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that reads matrix with dimensions MxN (max. 100x100). At the beginning the dimensions are read,
 * and then the elements of the matrix with values 0 or 1.
 * Your program should count and print on SO the number of rows and columns with at least 3 consecutive appearance of
 * elements with value 1. */

int main(){

    int f[100][100], n, m;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    int c1 = 0, c2 = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] == 1){
                c1++;
            }
            if(c1 == 3){
                c2++;
            }
        }
    }
    cout << c2;


    return 0;
}