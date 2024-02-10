#include<iostream>
using namespace std;

// SHOUTOUT TO MY FRIEND FLAMUR LIMANI FOR HELPING ME ON THIS TASK, HE THE TRUE GOAT

int main(){
    int n,m, f[100][100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> f[i][j];
        }
    }
    int x = 2;
    while(x <= n && x <= m){
        int sum1 = 0;
        for(int i = 0; i < x; i++){
            sum1 += f[0][i];
        }
        int k = 1, l = x - 2;
        for(int i = 1; i < x - 1; i++){
            sum1 += f[k][l];
            k++;
            l--;
        }
        for(int i = 0; i < x; i++){
            sum1 += f[x-1][i];
        }
        x++;
        cout << sum1 << endl;
    }

    return 0;
}
