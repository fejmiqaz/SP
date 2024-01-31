#include<iostream>
using namespace std;

int main(){
    int f[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int counter = 0;
    for(int i = 0; i < n;i++){
        if(f[i] % 2 != 0){
            counter++;
        }
    }
    cout << counter;


    return 0;
}