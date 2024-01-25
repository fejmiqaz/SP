#include<iostream>
using namespace std;

/* Write a program in which the first number N and K are read, and then N numbers are read.
Print the number that has the largest sum of its digits, which are less than K. The sum of digits less than K for each number should be calculated using a recursive function!
EX: Input:
3 5 // the numbers to be calculated to the sum should be less than 5.
1 7 3
1 9 3 8
1 3 5 2
Output:
1 3 3 2 */

int recursiveSum(int m, int k){
    if(m == 0){
        return 0;
    }
    int sum = 0;
    while(m > 0){
        int digit = m % 10;
        if(digit < k){
            sum += digit;
        }
        return sum + recursiveSum(m/10,k);
    }
}
int main(){
    int n, k, m;
    cin >> n >> k;
    while(n--){
        cin >> m;
        cout << recursiveSum(m, k) << endl;
    }
    return 0;
}