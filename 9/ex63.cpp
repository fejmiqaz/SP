#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that for a given array of characters, if it has special characters replace them with *, and if it's
 * a normal character and is in an odd position transform it into an uppercase letter, and if it's in an even position
 * to transform it into a lower case letter. */

int main(){

    char f[100];
    cin.getline(f,100);
    for(int i = 0; i < strlen(f); i++){
        if(!isalnum(f[i])){
            f[i] = '*';
        }
    }
    for(int i = 0; i < strlen(f); i++){
        if(i % 2 == 0){
            f[i] = tolower(f[i]);
        }else{
            f[i] = toupper(f[i]);
        }
    }
    for(int i = 0; i < strlen(f); i++){
        cout << f[i];
    }


    return 0;
}