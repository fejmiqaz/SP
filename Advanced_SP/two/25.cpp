#include<iostream>
#include<cstring>
using namespace std;

char maxDiffLetter(char * f){
    int maxCnt = 0, maxPosition = 0;
    for(int i = 0; i < strlen(f); i++){
        int cnt = 0, cnt1 = 0;
        if(tolower(isalpha(f[i])) != tolower(isalpha(f[i]))){
            cnt++;
        }
        if(cnt > maxCnt){
            maxCnt = cnt;
            cnt1++;
        }
    }
    for(int i = 0; i < strlen(f), i++){
        if(cnt1 > maxPosition){
            maxPosition = cnt1;
        }
    }

}

int main(){
    char f[21];
    while(cin.getline(f,21)){
        cout << maxDiffLetter(f);
    }

    return 0;
}