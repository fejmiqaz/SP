#include<iostream>
#include<cstring>
using namespace std;

void shift(char f[], int size){
    for(int i = 0; i < strlen(f); i++){
        if(isalpha(f[i])){
            char shifted = f[i] + 3;
            if((islower(f[i])) && shifted > 'z' || (isupper(f[i])) && shifted > 'Z'){
                shifted -= 26;
            }
            if(isupper(shifted)){
                shifted = tolower(shifted);
            }
            f[i] = shifted;
        }
    }
}

int main(){
    char f[100];
    while(cin.getline(f,100)){
        shift(f, strlen(f) - 1);
        cout << f << endl;
    }


    return 0;
}