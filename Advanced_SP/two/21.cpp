#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char f[101];
    cin.getline(f,101);
    int start = 0, end = 0;
    bool foundDigit = false;

    for(int i = 0; i < strlen(f); i++){
        if(isdigit(f[i])){
            if(!foundDigit){
                start = i;
                foundDigit = true;
            }
            end = i;
        }
    }
    if(!foundDigit){
        cout << "No digits";
    }else{
        if(start == end){
            for (int i = start; i < strlen(f); i++) {
                if (isalpha(f[i])) {
                    cout << f[i];
                }
            }
        }else{
            for (int i = start; i <= end; i++) {
                if (isalpha(f[i])) {
                    cout << f[i];
                }else{
                    if(isdigit(f[i])){
                        cout << f[i];
                    }
                }
            }
        }
    }
    return 0;
}