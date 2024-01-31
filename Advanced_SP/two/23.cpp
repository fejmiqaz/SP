#include<iostream>
#include<cstring>
using namespace std;

int main(){

    char f[100];
    cin.getline(f,81);

    for(int i = 0; i < strlen(f); i++){
        if(isalpha(f[i])){
            cout << f[i];
        }else if (isspace(f[i]) && i > 0 && isalpha(f[i - 1])) {
            cout << endl;
        }
    }


    return 0;
}