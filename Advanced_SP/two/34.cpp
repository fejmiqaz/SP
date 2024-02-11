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
    // finish inputs
    int x = 2; // set a value for the box inside the matrix
    while(x <= n && x <= m){
        int sum = 0;
        for(int i = 0; i < x; i++){
            sum += f[i][0]; // this is the first column
        }
        for(int i = 0; i < x; i++){
            sum += f[i][x-1]; // this is the last column
        }
        for(int i = 1; i < x - 1; i++){
            sum += f[i][i]; // this is the main diagonal
        }
        x++; // increment the size of the box inside the matrix by 1, so it continues summing elements until the end of the matrix
        cout << sum << endl;
    }


    return 0;
}
