#include<iostream>
#include<cstring>
using namespace std;

/* Write an array of characters. If the number of the given characters is an odd number, print the array in reverse. */

int main(){

    char f[100];
    cin.getline(f,100);
    int length = strlen(f);

    if(length % 2 != 0){
        for(int i = length - 1; i >= 0; i-- ){
            cout << f[i];
        }
    }

    return 0;
}