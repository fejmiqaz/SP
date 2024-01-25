#include<iostream>
#include<cstring>
using namespace std;

/* Write a program to compare 2 strings. Two strings of the same length are read from SI (the read strings always have the same
 * length, not exceeding 80 characters). The strings are compared to each other, and as a results, a new string of the same length
 * as the entered strings is returned, filled in as follows:
 * The position in the resulting string is filled with "*", if the corresponding positions in the entered string have the same
 * character.
 * The position in the resulting string is filled with a char (digit) which represents the occurrence of the char of the corresponding
 * position in the first string in the second string. If the occurrence is greater than 9, the char "X" should be put in the resulting
 * string.
 * Example:
 * INPUT:
 * ABCDE
 * EOCAX
 * 22222222222222
 * 11222222222222
 * Output:
 * 10*01
 * XX************ */

int main(){
    char f[81],q[81], e[81];
    cin.getline(f,81);
    cin.ignore();
    cin.getline(q,81);

    for(int i = 0; i < strlen(f); i++){
        for(int j = 0; j < strlen(q); j++){
            if (f[i] == q[i]) {
                e[i] = '*';
            } else {
                e[i] = 'X';
            }
        }
    }

    cout << e;

    return 0;
}