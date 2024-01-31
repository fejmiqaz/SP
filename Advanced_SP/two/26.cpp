#include<iostream>
using namespace std;

int main(){
    float n, f[100][100], q[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    float reversedZ[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n - 1 - i)
                reversedZ[i][j] = f[i][j];
            cout << reversedZ[i][j] << " ";
        }
    }
    cout << endl;

    for (int i = n- 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if (i == 0 || i == n - 1 || j == n - 1 - i)
                f[i][j] = reversedZ[i][j];
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