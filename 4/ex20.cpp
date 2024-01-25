#include<iostream>
using namespace std;
/*A given number n is entered from standard input, and then n three-digit numbers are entered.
 *Your task is to find the largest number whose sum of digits must be an even number.*/
int largestSum(int x, int y){
    int largest = 0, threenums;
    for(int i = 0; i < x; ++i){
        cin >> threenums;
        int fD = threenums / 100;
        int sD = (threenums / 10) % 10;
        int thD = threenums % 10;

        int sum = fD + sD + thD;
        if (sum % 2 == 0){
            if (threenums > largest){
                largest = threenums;
            }
        }else {
            continue;
        }
    }
    cout << largest << endl;
}
int main(){
    int x, triplets;
    cin >> x >> triplets;
    largestSum(x,triplets);
    return 0;
}