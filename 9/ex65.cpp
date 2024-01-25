#include<iostream>
#include<cstring>
using namespace std;

/* Write a program to check how many palindrome sentences an array of characters has.  */



int main(){
    char f[101];
    cin.getline(f,101);

    int counter = 0;
    for(int i = 0; i < strlen(f); i++){
        char reversed = 0;
        for(int j = strlen(f) - 1;j >= 0; j--){
            if((isalnum(f[j] && isalpha(f[j])))){
                f[j] = reversed;
            }
        }
        if((!isalnum(f[i]) && isalpha(f[i]) && isalnum(reversed) && isalpha(reversed))){
            if(f[i] == reversed){
                counter++;
            }
        }

    }
    cout << counter;


    return 0;
}