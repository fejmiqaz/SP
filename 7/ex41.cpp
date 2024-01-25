#include<iostream>

using namespace std;

/* Find the even values in a matrix and replace them with the sum of the indexes. */

int main() {
    int n, f[100][100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] % 2 == 0){
                f[i][j] = i + j;
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
/* for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (f[i][j] % 2 == 0) {
                f[i][j] = i + j;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << f[i][j] << " ";
        }
        cout << endl;
    } */