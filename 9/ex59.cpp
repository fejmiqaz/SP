#include<iostream>
#include<cstring>
using namespace std;

/* Write a program to check how many palindrome sentences an array of characters has.  */

char letters(char f[101]){
    char letters[100];
    int j = 0;
    for(int i = 0; i < strlen(f); i+=2){
        if(isalpha(f[i])){
            letters[j] = f[i];
            j++;
        }
    }
    letters[j] = '\0';
    return letters[j];
}

bool isPalindrome(char f[101]){
    int length = strlen(f);
    for(int i = 0; i < length / 2; i+=2){
        if(toupper(letters(f)) != toupper(letters(f))){
            return false;
        }
    }
    return true;
}


int main(){
    char f[101];
    cin.getline(f,101);

    cout << isPalindrome(f);


    return 0;
}