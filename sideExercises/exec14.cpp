#include<iostream>
#include<cstring>
using namespace std;

/* Write a program that will print the contents read from SI coded.
 * The coding is done letter by letter, so that each letter (only letters, not digits, dots, ...) is replaced with the
 * letter 3 places after in the alphabet. In case of the letters at the end of the alphabet, the counting continues cyclic
 * from the beginning of the alphabet. In the final coded text all letters are lowercase. Example letter a is coded to d,
 * H is coded to k, p is coded to s, x is coded to a, etc.
 * Example: Momentalno go testiram resenieto na mojata treta zadaca!
 * Output: prphqwdoqr jr whvwludp uhvhqlhwr qd prmdwd wuhwd cdgdfd! */

void shift(char f[], int size){
    for(int i = 0; i < strlen(f); i++){
        if(isalpha(f[i])){
            char shifted = f[i] + 3;
            if((islower(f[i])) && shifted > 'z' || (isupper(f[i])) && shifted > 'Z'){
                shifted -= 26;
            }
            if(isupper(shifted)){
                shifted = tolower(shifted);
            }
            f[i] = shifted;
        }
    }
}

int main(){

    char f[100];
    while(cin.getline(f,100)){
        shift(f, strlen(f) - 1);

        cout << f;
    }

    return 0;
}