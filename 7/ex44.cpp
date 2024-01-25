#include<iostream>
using namespace std;

/* Read a square matrix with number of rows and columns P. First the number N is entered and then n * n  elements of the matrix.
 * Your task is to replace all even elements in the matrix with the sum of their row and column indexes.
 * Finally, print the modified matrix.*/

int main(){

    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] % 2 == 0){
                int sum = i + j;
                f[i][j] = sum;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}