#include<iostream>
#include<cstring>
using namespace std;

/* Get the values from a matrix from the even index poitioned elements */

int main(){
    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    int tmp1 = 0, tmp2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i == 2) && (j == 2)){
                tmp1 = f[i][j];
            }
            if((i == 1) && (j == 1)){
                tmp2 = f[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i == 2) && (j == 2)){
                f[i][j] = tmp2;
            }
            if((i == 1) && (j == 1)){
                f[i][j] = tmp1;
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