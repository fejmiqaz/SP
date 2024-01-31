#include<iostream>
using namespace std;

int main(){

    int f[100][100], n, m;
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    int c1 = 0, c2 = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] == 1){
                c1++;
            }
            if(c1 == 3){
                c2++;
            }
        }
    }
    cout << c2;


    return 0;
}