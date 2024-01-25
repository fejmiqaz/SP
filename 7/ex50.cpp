#include<iostream>
using namespace std;

/* Input a square matrix and find the max and min by row. Replace the max and min of the anti and main diagonals like so:
 * min = 0, max = 1;*/

int main(){

    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int min = f[0][0], max = f[0][0];
        for(int j = 0; j < n; j++){
            if((i == j) && ((i+j) == n - 1)){
                if(f[i][j] < min){
                    min = f[i][j];
                }
                if(f[i][j] > max ){
                    max = f[i][j];
                }
            }
        }
        for(int j = 0; j < n; j++){
            if((i == j) && ((i+j) == n - 1)){
                if(f[i][j] == min){
                    f[i][j] = 0;
                }else if(f[i][j] == max){
                    f[i][j] = 1;
                }
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

/* for(int i = 0; i < n; i++){
        int min = f[0][0], max = f[0][0];
        for(int j = 0; j < n; j++){
            if(i == j){
                if(f[i][j] < min){
                    min = f[i][j];
                }
                if(f[i][j] > max){
                    max = f[i][j];
                }
            }
        }
        for(int j = 0; j < n; j++){
            if(i == j){
                if(f[i][j] == min){
                    f[i][j] = 0;
                }else if(f[i][j] == max){
                    f[i][j] = 1;
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    } */