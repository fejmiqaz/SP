#include<iostream>

using namespace std;

/* Input a square matrix, find the smallest and largest number by row, min and max.
 * After we get the min and max replace those numbers of the matrix with min = 0 and max = 1;
 * Print the result.
 * And also do the same for under the main and anti-diagonal.*/

int main() {

    int n, f[100][100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int min = f[i][0], max = f[i][0];
        for (int j = 0; j < n; j++) {
            if (f[i][j] < min) {
                min = f[i][j];
            }
            if (f[i][j] > max) {
                max = f[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (f[i][j] == min) {
                f[i][j] = 0;
            } else if (f[i][j] == max) {
                f[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
/* for(int i = 0; i < n; i++){
        int min = f[i][0], max = f[i][0];
        for(int j = 0; j < n; j++){
            if(f[i][j] < min){
                min = f[i][j];
            }
            if(f[i][j] > max){
                max = f[i][j];
            }
        }
        for(int j = 0; j < n; j++){
            if(f[i][j] == min){
                f[i][j] = 0;
            }else if(f[i][j] == max){
                f[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    } */