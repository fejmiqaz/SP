#include<iostream>
using namespace std;

void bubbleSortZerosToEnd(int q[100], int m){
    for(int i = 0; i < m - 1; i++){
        for (int j = 0; j < m - i - 1; j++) {
            if (q[j] == 0 && q[j + 1] != 0) {
                int tmp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = tmp;
            }
        }
    }

}
void doTheCalc(int g[100], int r){
    for(int i = 0; i < r; i++){
        if(g[i] == g[i+1]){
            g[i] += g[i+1];
            g[i+1] = 0;
        }
    }

    bubbleSortZerosToEnd(g,r);

    for(int i = 0; i < r; i++){
        cout << g[i] << " ";
    }
    cout << endl;
}

int main(){
    int n, f[100]; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    doTheCalc(f,n);

    return 0;
}