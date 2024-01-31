#include<iostream>
using namespace std;

int main() {

    char ch;
    int currentNum = 0;
    int sum = 0;
    bool inNumber = false;
    while((cin >> noskipws >> ch) && ch != '!'){
        if(ch>='0' && ch <= '9'){
            currentNum = currentNum * 10 + (ch - '0');
            inNumber = true;
        }else{
            if(inNumber){
                sum += currentNum;
                currentNum = 0;
                inNumber = false;
            }
        }
    }
    if(inNumber){
        sum += currentNum;
    }
    cout << sum;
    return 0;
}