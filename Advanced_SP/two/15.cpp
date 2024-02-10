#include<iostream>
using namespace std;

void recursive(int n){
    if( n == 0){
        return ;
    }
    recursive(n - 1);
    cout << n;
}

void printPattern(int n, int max){
    if(n > max){
        return ;
    }
    
    recursive(n);
    cout << endl;
    printPattern(n+1,max);
}

int main(){
    int n;
    cin >> n;

    printPattern(1,n);

    return 0;
}
