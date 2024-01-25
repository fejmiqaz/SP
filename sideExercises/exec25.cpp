#include<iostream>
#include<cstring>
using namespace std;

/* From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:

N - number of strings you are going to read X - shifting size.
 Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z)
 are replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet,
 continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.
Transformation of a string should be implemented in a separate recursive function.
Example:
Welcome -> transformed with shift 5 -> Bjqhtrj */

int main(){

    int n, x;
    cin >> n;
    char f[100];
    cin >> x;
    cin.ignore();
    while(n > 0){
        cin.getline(f,100);
        char shifted[100];
        for(int i = 0; i < strlen(f); i++){
            if(isalpha(f[i])){
                char base = islower(f[i]) ? 'a' : 'A';
                f[i] = (f[i] - base + 26) % 26 + base;
                shifted[i] = f[i] + x;
            }
        }
        cout << shifted;
        n--;
    }

    return 0;
}
