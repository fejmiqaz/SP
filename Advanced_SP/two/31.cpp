#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    cin.get();
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
                }else{
                    if(shifted > 'z'){
                        shifted -= 26;
                    }
                }
                f[i] = shifted;
            }
        }
        cout << f << endl;
    }
    return 0;
}