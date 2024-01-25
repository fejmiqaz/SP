#include <iostream>
using namespace std;

/* In Morse code, the characters (letters, digits) are represented by dots and dashes.
The digits from 0 to 4 are represented as follows: “—–,” “.—-,” “..—,” “…–,” “….-.”
You enter a natural number N (N < 100,000) from the keyboard, and then N other natural numbers are entered.
For each of the entered numbers, print the remainder when
dividing that number by 5 in Morse code, each in a separate line. */


int main() {

    int n, currentNum;
    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> currentNum;
        int rest = currentNum%5;
        if (rest == 0){
            cout << "-----" << endl;
        } else if (rest == 1) {
            cout << ".----" << endl;
        } else if (rest == 2) {
            cout << "..---" << endl;
        } else if (rest == 3) {
            cout << "...--" << endl;
        } else if (rest == 4) {
            cout << "....-" << endl;
        }


    }


    return 0;
}
