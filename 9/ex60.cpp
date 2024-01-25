#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that for an array of characters (containing 300 characters). Now write a program that from an input
 * for a given character prints the substring from the first occurrence until the last occurrence of the character.
 * Ignore the case of the letters.
 * Ex: Zdravo kako si?
 * Output: avo ka */

void subString (char f[100], char c){
    int length = strlen(f), start = 0, end = 0;

    for(int i = 0; i < length; i++){
        if(f[i] == c){
            start = i;
            break;
        }
    }
    for(int i = length - 1; i >= 0; i--){
        if(f[i] == c){
            end = i;
            break;
        }
    }
    for(int i = start; i <= end; i++){
        cout << f[i];
    }
}

int main(){
    char f[301], c;
    cin.getline(f,301);
    cin >> c;

    subString(f,c);

    return 0;
}