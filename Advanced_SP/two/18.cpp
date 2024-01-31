#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char f[81];
    while(cin.getline(f,81)){
        int sum = 0;
        for(int i = 0; i < strlen(f); i++){
            if(isdigit(f[i])){
                int number = 0;
                while (isdigit(f[i])) {
                    number = number * 10 + (f[i] - '0');
                    i++;
                }
                sum += number;
            }
            if(isalpha(f[i])){
                cout << f[i];
            }
        }
        cout << sum << endl;

    }

    return 0;
}