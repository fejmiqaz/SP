#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    int diagonalSum = 0, antiDiagonalSum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           if(i == j){
                diagonalSum += f[i][j];
           }
           if(((i+j) == n - 1)){
               antiDiagonalSum += f[i][j];
           }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    int square = diagonalSum + antiDiagonalSum;
    if((sqrt(square) * sqrt(square)) == square){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
/* Write a program that check whether the elements of the main diagonal and anti-diagonal of a square matrix of natural
 * numbers satisfy the "sum-square-row" rule.
 * The size of the square matrix of natural numbers (N < 100) is read from SI followed by reading its elements row by row.
 * A given square matrix satisfies the "sum-square-row" rule if:
 * The sum of pairs of elements on the main diagonal and anti-diagonal of each row of the matrix represents a perfect square
 * (square of an integer, example: 3*3 = 9 = 3^2).
 * For this task, first, the entire matrix should be printed on the screen (each row of the matrix is printed in a separate line).
 * Then, if the matrix satisfies the rule, "YES" should be printed on the screen. If the matrix does not satisfy the rule,
 * "NO" should be printed.
 * For matrices with an odd number of rows/columns, the element that simultaneously lies on both the main and secondary diagonals
 * is added to itself.
 * Example:
 * 1 2 6 3 8
 * 3 2 9 2 6
 * 10 4 18 7 10
 * 5 7 6 9 8
 * 10 5 3 6 15
 * Output:
 * 1 2 3 6 8
 * 3 2 9 2 6
 * 10 4 18 7 10
 * 5 7 6 9 8
 * 10 5 3 6 15
 * YES*/

