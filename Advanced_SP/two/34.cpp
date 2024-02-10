#include<iostream>
using namespace std;

// AGAIN THIS TASK IS INSPIRED BY MY FRIEND FLAMUR LIMANI, BUT WITHOUT HELP THIS TIME HAHA :p

int main(){
    int n, m, f[100][100];
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
            sum1 += f[i][0];
        }
        for(int i = 0; i < x; i++){
            sum1 += f[i][x-1];
        }
        for(int i = 1; i < x - 1; i++){
            sum1 += f[i][i];
        }
        x++;
        cout << sum1 << endl;
    }


    return 0;
}