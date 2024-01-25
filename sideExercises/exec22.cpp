#include<iostream>
#include<cstring>
using namespace std;

/* Sequences of no more than 80 characters (letters, digits, and special characters), each in a separate line,
 * are read from SI. Write a program that will erase all the vowels from the text (regardless of the case of the letters)
 * and will print the resulting text on the standard output in the same format as in the input.
For example:
Input
Denes e Ubav den a polagame
Strukturno programiranje vo 200ab bcd
Result:
Dns bv dn plgm
Strktrn prgrmrnj v 200b bcd */

bool Vowels(char c){
    c = tolower(c);
    return c == 'a' || c == 'e' || c=='i' || c=='o' || c=='u';
}

void printString(char * f){
    for(int i = 0; i < strlen(f); i++){
        if((!Vowels(f[i])) && (!isspace(f[i]))){
            cout << f[i];
        }
    }
}

int main(){
    char f[81];
    while(cin.getline(f,81)){
        printString(f);
    }

    return 0;
}
