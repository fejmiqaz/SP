#include<iostream>
#include<cstring>
using namespace std;

/* Write a function letterFrequency(char text[], char letter) that for a given letter will print information about the relative
 * frequency of occurrence of that letter in the text string text(as a lowercase and as an uppercase letter). Limit is 1000 characters.
 * The relative frequency of a letter is calculated as the quotient of the number of occurrences of that letter and the total
 * number of letters in the text.
 * Ex: Fejmi qazimi is the goat, edin is the elephant, elmi is elegant and electric.
 *     E*/

double frequency(char f[100], char c){
    int length = strlen(f);
    double charCounter = 0, totalLetters = 0;
    for(int i = 0; i < length; i++){
        if(f[i] == c){
            charCounter++;
        }
        if(isalpha(f[i])){
            totalLetters++;
        }
    }
    return charCounter / totalLetters;
}

int main(){
    char f[100], c;
    cin.getline(f,100);
    cin >> c;

    cout << frequency(f,c);
    return 0;
}