#include<iostream>
using namespace std;

void printMatrix(int f[100][100], int n){
    int q[100][100];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int cnt = 0;
            if(i > 0 && f[i-1][j] == 1){
                cnt++;
            }
            if(i < n && f[i][j+1] == 1){
                cnt++;
            }
            if(j < n && f[i+1][j] == 1){
                cnt++;
            }
            if(j > 0 && f[i][j-1] == 1){
                cnt++;
            }
            if(cnt >= 3){
                q[i][j] = 1;
            }else{
                q[i][j] = f[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            f[i][j] = q[i][j];
        }
    }
}

int main(){
    int f[100][100], n;
    cin >> n;

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    printMatrix(f,n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}