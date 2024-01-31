#include<iostream>
using namespace std;

int main(){
    int n, f[100][100];
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == 0 || i == j || j == n-1){
                sum += f[i][j];
            }
        }
    }
    cout << sum << endl;
    return 0;
}