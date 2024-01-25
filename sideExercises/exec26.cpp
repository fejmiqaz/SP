#include<iostream>
#include<cstring>
using namespace std;

/* Words (no longer than 20 letters and each in a new line) are read from SI.
 * Write a program that will print the word that has the biggest number of different letters. Words that have less than
 * four letters are not taken into account during the check. Do not make a difference between upper and lower case letters.
 * If there are more words that meet the criteria, the last one is printed. */

int longestWord(char f[]){
    char q[21];
    strcpy(q,f);
    char a = q[0];
    int counter = 0;
    for(int i = 0; i < strlen(f); i++){
        if(a != q[i]){
            counter++;
        }
    }
    return counter;
}

int main(){
    char f[21];
    cin.getline(f,21);
    cout<< longestWord(f);

    return 0;
}