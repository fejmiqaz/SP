#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char f[100], result[100];
    double maxRatio = 0;
    while(cin.getline(f,100)){
        double cnt = 0, cnt1 = 0;
        bool letters = false;
        for(int i = 0; i < strlen(f);i++){
            if(isalpha(f[i])){
                cnt++;
                letters = true;
            }
            if(isdigit(f[i])){
                cnt1++;
            }
        }
        if(letters){
            double ratio = cnt1 / cnt;
            if(ratio > maxRatio){
                maxRatio = ratio;
                strcpy(result,f);
            }
            ratio = 0;
        }
    }
    cout << result << endl;
}