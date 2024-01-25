#include<iostream>
using namespace std;

/* Find and change the sign of the elements in the matrix that are simultaneously under the main diagonal and
 * anti-diagonal. If they're positive, make them negative, if they're negative make them positive. */


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
            if((i > j) && (i+j) >= n){
                if(f[i][j] > 0){
                    f[i][j] *= -1;
                }
                if(f[i][j] < 0){
                    f[i][j] = abs(f[i][j]);
                }
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

/* for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i > j && (i+j) >= n) {
                if (f[i][j] > 0) {
                    f[i][j] *= -1;
                } else if (f[i][j] < 0) {
                    f[i][j] = abs(f[i][j]);
                }
            }

        }
    }

    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    } */