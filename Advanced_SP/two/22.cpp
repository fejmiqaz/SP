#include<iostream>
using namespace std;

int main(){
    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>f[i][j];
        }
    }

    int max = 0, min = 1e9;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i>j){
                if(f[i][j] < min){
                    min = f[i][j];
                }
            }
            if(i<j){
                if(f[i][j] > max){
                    max = f[i][j];
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i>j){
                f[i][j] = min;
            }
            if(i<j){
                f[i][j] = max;
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