#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that will read from SI words (each in a separate row) no longer than 30 letters.
 * Find all the words  that define a palindrome only with the vowels they contain (after making the opposite word of
 * the given one, the vowels have not changed their indexes within the word). Print these words on a standard output.
 * The appearance of uppercase and lowercase letters should be ignored.
 * Example:
 * Hellen
 * input
 * werAnifameb
 * Output:
 * Hellen
 * werAnifameb */

bool isVowel(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void isPalindrome(char f[101]){
    int length = strlen(f);

    int start = 0, end = 0;

    for(int i = 0; i < length; i++){
        if(isVowel(f[i])){
            start = i;
            break;
        }
    }

    for(int i = length; i >= 0; i--){
        if(isVowel(f[i])){
            end = i;
            break;
        }
    }

    for(int i = start; i <= end; i++){
        if(toupper(isVowel(f[i])) == toupper(isVowel(f[i]))){
            cout << f[i];
        }
    }
    return ;
}

int main(){

    char f[101];
    cin.getline(f,101);


    isPalindrome(f);


    return 0;
}