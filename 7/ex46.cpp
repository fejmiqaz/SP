#include<iostream>
using namespace std;

/* It is necessary to fold the matrix as shown in the picture. When doubling the matrix, the elements of the positions
 * that coincide during the doubling are collected. You should add up the elements from the last element on the main diagonal
 * to the last element on the anti-diagonal, to the first element of the main diagonal and to the first element of the anti
 * diagonal.
 * For example:
 * 4
 * 1 2 3 4
 * 5 6 7 8
 * 9 10 11 12
 * 13 14 15 16, You should do: 16 + 4 + 1 + 13 = 34, and divide the matrix by 2, so it would become from 4x4 to 2x2.
 * Output:
 * 34 34
 * 34 34 */

int main(){

    int n, f[100][100];
    cin >> n;

    if(n % 2 != 0){
        cout << "Error" << endl;
        return 1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    for(int i = 0; i < n / 2; i++){
        for(int j = 0; j < n / 2; j++){
            f[i][j] = f[i][j] + f[i][n - 1 - j] + f[n - 1 - i][j]+ f[n - 1 - i][n - 1 - j];
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