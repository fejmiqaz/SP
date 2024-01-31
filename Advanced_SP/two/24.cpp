#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main(){

    char f[100];
    double maxAvg = 0;
    int counter = -1;
    while(cin.getline(f,100)){
        float cnt = 0, cnt1 = 0;
        for(int i = 0; i < strlen(f); i++){
            if(islower(f[i])){
                cnt++;
            }else if(isupper(f[i])){
                cnt1++;
            }
        }
        float average = 0;
        if(cnt != 0 ){
            average = cnt1 / cnt;
            if(average > maxAvg){
                maxAvg = average;
                counter++;
            }
        }
        cout << fixed << setprecision(2) <<  average << " ";
        for(int i = 0; i < strlen(f); i++){
            cout << f[i];
        }
        cout << endl;
    }
    cout << counter << endl;

    return 0;
}