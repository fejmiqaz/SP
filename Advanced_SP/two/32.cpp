#include<iostream>
using namespace std;

int factoriel(int n) {
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return n * factoriel(n - 1);
    }
}

int strongNumbers(int n){
    int sum = 0;
    while(n > 0){
        int digit = n % 10;
        sum += factoriel(digit);
        n/=10;
    }
    return sum;
}

int main(){
    int m, n;
    cin >> m;

    cout << "Strong numbers:" << endl;
    while(m--){
        cin >> n;
        if(strongNumbers(n) == n){
            cout << n << endl;
        }
    }

    return 0;
}