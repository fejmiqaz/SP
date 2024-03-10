#include<iostream>

using namespace std;

/* From SI, a square matrix with n rows and columns is read. First, the number n is read, and then the n * n elements of the
 * matrix are read.
 * Your task is to write a program in C++ that will determine if the given matrix is a "magic square".
 * A magic square is a square matrix where the sum of the elements in each row and column is the same.
 * If the matrix is a "magic square", print "True" and replace the elements from the main and secondary diagonals with the
 * sum of the elements that is the same for each row and columns
 * Otherwise print, "False".*/


int main() {

    int n, f[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }
    int rowSum = 0, columnSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            rowSum += f[i][i];
            columnSum += f[i][n - i - 1];
        }
    }
    if(rowSum != columnSum){
        cout << "False" << endl;
        return 0;
    }
    cout << "True" << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i == j) && (i+j) == n - 1){
                f[i][j] = columnSum;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(rowSum == columnSum){
                f[i][j] = columnSum;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                f[i][j] = columnSum;
            }
            if((i+j) == n - 1){
                f[i][j] = columnSum;
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
