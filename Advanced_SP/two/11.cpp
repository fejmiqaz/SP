#include<iostream>
using namespace std;
void countOccurrence(int f[100], int n){
    if(n == 0){
        return ;
    }
    int tmp = f[n - 1];
    int ld = tmp % 10;
    int counter = 0;
    while(tmp != 0){
        int digit = tmp % 10;
        if(digit == ld){
            counter++;
        }
        tmp/=10;
    }

    countOccurrence(f,n-1);
    cout << counter << " ";
}

int main(){

    int f[100], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    countOccurrence(f,n);
    return 0;
}