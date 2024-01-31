#include<iostream>
using namespace std;

int main(){

    int n, m, f[100][100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int sum = 0, cnt = 0;
            if(i - 1 >= 0 && f[i-1][j] >= 0){
                sum += f[i-1][j];
                cnt++;
            }
            if(j+1 >= 0 && f[i][j+1] >= 0){
                sum += f[i][j+1];
                cnt++;
            }
            if(i + 1 >= 0 && f[i+1][j] >= 0){
                sum += f[i+1][j];
                cnt++;
            }
            if(j - 1 >= 0 && f[i][j-1] >= 0){
                sum += f[i][j-1];
                cnt++;
            }
            if(cnt >= 0){
                f[i][j] = sum;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}