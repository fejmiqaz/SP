#include<iostream>
using namespace std;

int main(){
    int f[100][100], n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> f[i][j];
        }
    }
    int minSum = 1e9;
    int minCol = -1;
    for(int j = 0; j < m; j++){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += f[i][j];
        }
        if(sum < minSum){
            minSum = sum;
            minCol = j;
        }
    }
    cout << minCol;
    return 0;
}