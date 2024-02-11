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
    // ^^^^^ finish inputs
    
    int x = 2; // set a starting value for the box inside the matrix, this means rows go <= 2, and cols <= 2
    while(x <= n && x <= m){
        int sum = 0;
        for(int i = 0; i < x; i++){
            sum += f[0][i]; // this is for the 0th row
        }
        int k = 1, l = x - 2;
        for(int i = 1; i < x - 1; i++){
            sum += f[k][l]; // this is the anti-diagonal
            k++;
            l--;
        }
        for(int i = 0; i < x; i++){
            sum += f[x-1][i]; // this is the last row
        }
        x++; // incrementing the box inside the matrix by 1 each time you finish summing the elements, which means rows++, cols++
        cout << sum << endl;
    }

    return 0;
}
