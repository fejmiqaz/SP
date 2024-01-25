#include<iostream>

using namespace std;

/* On SI, enter a square matrix. After entering the matrix, a value for Y column and Y row is entered.
 * Transform the matrix so that the main diagonal is replaced by the Y column, and the Y column and Y row are replaced
 * by the main diagonal.
 * EX: Input:
 * 5
 * 9 1 2 3 4
 * 1 9 2 3 4
 * 1 2 9 3 4
 * 1 2 3 9 4
 * 1 2 3 4 9
 * 0
 * Output:
 * 9 9 9 9 9
 * 9 1 2 3 4
 * 9 2 1 3 4
 * 9 2 3 1 4
 * 9 2 3 4 1*/

int main() {

    int n, f[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }
    int y;
    cin >> y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if((i+j) == n - 1){
                f[i][j] = f[y][y];
            }
        }
    }
    for(int i = 0; i < n; i++){
        int tmp = f[i][i];
        f[i][i] = f[i][y];
        f[i][y] = tmp;

        f[y][i] = f[i][y];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

/* int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    int y; cin >> y;
    for(int i = 0; i < n; i++){
        int temp = f[i][i];
        f[i][i] = f[i][y];
        f[i][y] = temp;

        f[y][i] = f[i][y];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    } */
