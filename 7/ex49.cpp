#include<iostream>
using namespace std;

/* Enter a square matrix. Transform the matrix so that the negative number is replaced by the sum of its neighbors.
 * Addition (sum of the neighbors of a member of a matrix is seen horizontally from it and vertically).*/

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
            if(f[i][j] < 0){
                f[i][j] = f[i-1][j] + f[i][j+1] + f[i+1][j] + f[i][j-1];
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