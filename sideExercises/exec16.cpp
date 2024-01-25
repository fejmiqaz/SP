#include<iostream>
#include<cstring>
using namespace std;

/* Z-diagonal of given square matrix is composed of the elements of the first row, the elements of the supportive diagonal,
 * and the elements of the last row (marked with blue color on the example).
 * From SI read the dimensions of square matrix (integer N, N > 2, N<100), and the elements of the matrix (real numbers).
 Store the elements of the Z-diagonal in a array, starting from the first row, continuing with the supportive diagonal,
 and finishing with the last row (the last element of the first row is the same element with the first element of the
 supportive diagonal, and the last element of the supportive diagonal is the same as the first element of the last row,
 and these elements should be stored only once). The resulted array should be printed on the SO. Then print the original
 matrix, but with the elements of Z-diagonal in reverse order.
 Example:
    Input:

    4
    5 5.5 6 1.2
    8  95.1 21.3 13
    34 4.1 37.4  22
    4.1 5.5 0.7 7
    Output:

    5.00 5.50 6.00 1.20 21.30 4.10 4.10 5.50 0.70 7.00
    7.00 0.70 5.50 4.10
    8.00 95.10 4.10 13.00
    34.00 21.30 37.40 22.00
    1.20 6.00 5.50 5.00 */

int main(){

    double f[100][100], q[100];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    double firstRow[100], antiDiagonal[100], lastRow[100], Zdiagonal[100];
    for(int i = 0; i < n; i++){
        firstRow[i] = f[0][i];
        lastRow[i] = f[n - 1][i];
        antiDiagonal[i] = f[i][n - 1 - i ];
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1 || i == n / 2) {
            Zdiagonal[index++] = firstRow[i];
        } else if (i < n / 2) {
            Zdiagonal[index++] = antiDiagonal[i];
        } else {
            Zdiagonal[index++] = lastRow[n - 1 - i];
        }
    }

    for(int i = 0; i < index; ++i){
        cout << Zdiagonal[i] << " ";
    }
    cout << endl;



    return 0;
}