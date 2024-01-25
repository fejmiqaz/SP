#include<iostream>
#include<cstring>
using namespace std;

/* Write an array of characters and modify the program so that all the vowels to become uppercase letters and all the
 * consonants to become lowercase letters, and vice versa.*/

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o';
}

int main(){

    char f[100];
    cin.getline(f, 100);

    for(int i = 0; i < strlen(f); i++){
        if(isVowel(f[i])){
            f[i] = toupper(f[i]);
        }else{
            f[i] = tolower(f[i]);
        }
    }

    for(int i = 0; i < strlen(f); i++){
        cout << f[i];
    }



    return 0;
}