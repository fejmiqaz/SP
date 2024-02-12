#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char f[1000];
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    char q[1000];
    int max = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < n; j++){
            if(f[i] == f[j]){
                cnt++;
            }
        }
        if(cnt > max){
            max = cnt;
            q[0] = f[i];
        }else if (cnt == max){
            q[1] = f[i];
        }
    }
    if(q[1] - 'A' > q[0] - 'A'){
        cout << q[1];
    }else{
        cout << q[0];
    }
    return 0;
}