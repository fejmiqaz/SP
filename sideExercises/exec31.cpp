#include<iostream>
#include<cstring>
using namespace std;

/* An unknown number of sentences represented by text strings (strings), each not longer than 100 characters and each in
 * a new line, are entered from the standard input. The program should find the string containing the most conjunctions and
 * print it along with the number of conjunctions found. All words of one, two or three letters are considered conjunctions.
 * Words in a text string are separated by one or more spaces and/or punctuation marks.
Counting conjunctions in a given text string should be implemented in a separate function. Solutions without using a
 function will be evaluated with a maximum of 40% of the points.
If there are multiple sentences with the same maximum number of conjunctions, the first one found is printed.
Explanation of the test case
The number of connectors is 2,3,4,2,4 and 7 respectively. The last sentence has the most conjunctions, so the number 7
 and the content of that sentence are printed. */

/*void conjunctionFound(char f[101]){
    int counter = 0;
    int counter2 = 0;
    for(int i = 0; i < strlen(f); i++){
        if(isspace(f[i])){
            if(isalpha(f[i])){
                counter++;
            }
            if(counter <= 3){
                counter2++;
            }
        }
    }
    cout << counter2;
}*/

void recursionF(int a){

    // Print the decreasing numbers
    std::cout << a << " ";

    // Recursive call with n-5
    recursionF(a - 5);

    // Print the increasing numbers after the recursive call
    std::cout << a << " ";
}


int main(){
    int a;
    cin >> a;

    recursionF(a);

    /*char f[101];
    cin.getline(f,101);
    conjunctionFound(f);*/



    return 0;
}