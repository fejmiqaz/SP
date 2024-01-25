#include<iostream>
#include<cstring>
using namespace std;

/* task30 on the courses */

void mostFrequentEl(int f[100], int n){
    int maxCount = 0;
    for(int i = 0; i < n; i++){
        int currentEl = f[i];
        int currentCount = 0;

        if(currentEl == -1){
            continue;
        }
        for(int j = 0; j < n; j++){
            if(f[j] == currentEl){
                currentCount++;
                if(i != j){
                    f[j] = -1;
                }
            }
        }
        if(currentCount > maxCount){
            maxCount = currentCount;
        }
    }

    for(int i = 0; i < n; i++){
        int currentEl = f[i];
        int currentCount = 0;

        if(currentEl == -1){
            continue;
        }
        for(int j = 0; j < n; j++){
            if(f[j] == currentEl){
                currentCount++;
                if(i != j){
                    f[j] = -1;
                }
            }
        }
        if(currentCount == maxCount){
            cout << currentEl << " ";
        }
    }
    cout << endl;
}

int main(){
    int n, f[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    mostFrequentEl(f,n);

    return 0;
}