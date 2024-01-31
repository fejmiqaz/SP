#include<iostream>
using namespace std;

int main(){
    int n, f[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int cnt = 0;
    for(int i = 0; i < n / 2; i++){
        if(f[i] > f[n - i - 1]){
            f[n-i-1] = f[i];
            cnt++;
        }else if(f[i] < f[n-i-1]){
            f[i] = f[n-i-1];
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }
    cout << endl;



    return 0;
}