#include<iostream>
#include<cstring>
using namespace std;

/* Read from SI input lines of text. Each line has no more than 80 characters and the characters are letters,
 * special characters, and digits. The first line in the file has a row number of 1, the second has a row number of 2,etc.
 * Write a program that will print the row number of the line with the longest subarray that contains only digits.
 * If the input does not contain any lines with numbers, the program should print a message There are no such lines.
 * If there is more than one line with the same max number of letters, than the row number of the last read line is printed.
 * For example:
Input
never!?!odd.27,or12even356
A_man_a*$Plan510123a_canal,PanamA.
Rise?!12to45vote&*siR
Result:
2 */

int checkDigits(char * f){
    int subarrayLen = 0;
    for(int i = 3; i < strlen(f) - 1; i++) {
        if (isdigit(f[i])) {
            int counter = 1;
            for(int j = 0; j < strlen(f); j++){
                if(!isdigit(f[i])){
                    i = j;
                    break;
                }
                ++counter;
            }
            if(counter > subarrayLen){
                subarrayLen = counter;
            }
        }
    }
    return subarrayLen;
}

int main(){
    char f[81];

    int max = 0, counter = 1, maxLineCounter = 0;

    while(cin.getline(f,81)){
        if(f[0] == '#'){
            break;
        }
        int result = checkDigits(f);
        if(result > max){
            max = result;
            maxLineCounter = counter;
        }
        ++counter;
    }
    if(maxLineCounter > 0){
        cout << maxLineCounter;
    }else{
        cout << "No such subarrays";
    }

    return 0;
}
