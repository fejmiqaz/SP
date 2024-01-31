#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int maxSumDiv = 0;
    int numWMaxSumDiv = 0;

    for (int i = n -1; i > 1; i--){
        for (int j = 1; j <= i / 2; j++)
            if (i % j == 0){
                sumOfDivisors += j;
            }
    }
    if (sumOfDivisors > maxSumDiv){
        maxSumDiv = sumOfDivisors;
        numWMaxSumDiv = i;
    }
}
if (numWMaxSumDiv != -1){
cout << numWMaxSumDiv << endl;
}



return 0;
}