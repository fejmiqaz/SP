#include<iostream>
#include<cstring>
using namespace std;

/*  From SI read N strings not longer than 80 chars. At the beginning of the program read two integers:

    N - number of strings you are going to read
    X - shifting size.
    Each of the read strings should be transformed in such a way that lowercase and uppercase letters (a-z, A-Z) are
    replaced with the same letter shifted X places afterwards in the alphabet (a-z). If you overflow the range of alphabet,
    continue cyclic from the beginning of the alphabet. Transformed string should be printed on SO.
    Transformation of a string should be implemented in a separate recursive function.
    Example:

    Welcome -> transformed with shift 5 -> Bjqhtrj  */

int main(){




    return 0;
}

/*int n, x;
    cin >> n >> x;
    cin.ignore();
    while(n--){
        char f[81];
        cin.getline(f,81);
        for(int i = 0; i < strlen(f); i++){
            if(isalpha(f[i])){
                char shifted = f[i] + x;
                if(isupper(f[i])){
                    if(shifted > 'Z'){
                        shifted -= 26;
                    }
                    f[i] = toupper(shifted);
                }else{
                    if(shifted > 'z'){
                        shifted -= 26;
                    }
                }
                f[i] = shifted;
            }
        }
        cout << f << endl;
    }*/