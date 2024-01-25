#include<iostream>
using namespace std;

/* Change the signs of the elements in a given matrix, of the main diagonal so that the positive numbers will remain
 * negative and the opposite.*/

int main() {

    int n, f[100][100];
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if((i+j) == n - 1){
                if(f[i][j] > 0){
                    f[i][j] *= -1;
                }else if(f[i][j] < 0){
                    f[i][j] = abs(f[i][j]);
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