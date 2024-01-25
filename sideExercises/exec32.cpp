#include<iostream>
#include<cstring>
using namespace std;

void read(char f[], char q[]){
    int counter = 0;
    for(int i =0; i < strlen(f); i++){
        if(isalpha(f[i]) == isalpha(q[i])){
            counter = 1;
        }
    }
    if (counter == 1){
        cout << f;
    }else{
        cout << "This string doesn't contain one same word.";
    }
}

int main(){
    char f[100], q[100];
    int n;
    cin >> n;
    cin.ignore();
    cin.getline(q,100);
    while(n--){
        cin.getline(f,100);
        read(f,q);
    }


    return 0;
}