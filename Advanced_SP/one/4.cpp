#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 2 || n == 5){
        cout << "The number is invalid" << endl;
        return 1;
    }


    int largestNum = -1;

    for (int i = n -1; i > 0; i--){

        int numDigits = 0;
        int flipped = 0;
        int tmp = i;

        while (tmp > 0){
            flipped = flipped * 10 + tmp % 10;
            tmp /= 10;
            numDigits++;
        }
        if(numDigits == 0){
            numDigits = 1;
        }
        if(flipped % numDigits == 0){
            largestNum = i;
            break;
        }


    }
    if(largestNum != -1){
        cout << largestNum << endl;
    }else{
        cout << "The number is invalid" << endl;
    }


    return 0;
}