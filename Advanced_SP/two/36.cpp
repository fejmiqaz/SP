#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int f[n][n];
    int ones = 1, cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cnt % 2 != 0){
                if(ones >= 1){
                    f[i][j] = 1;
                    ones--;
                }else{
                    f[i][j] = 0;
                }
            }else{
                if(ones >= 1){
                    f[i][n-1-j] = 1;
                    ones--;
                }else{
                    f[i][n-1-j] = 0;
                }
            }
        }
        ones += i + 2;
        cnt++;
    }

    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}