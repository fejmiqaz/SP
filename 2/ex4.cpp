#include<iostream>
using namespace std;

int main() {
    // Write a program in which four numbers are entered. If the sum of the first two entered numbers is even,
    // and if the sum of the last two numbers is odd, print 1, otherwise print 0.
    int n;
    cin >> n;

    int sum1 = ( n % 10) + (( n / 100) % 10);
    int sum2 = (n % 10) + ((n / 10) % 10);

    if (sum1 % 2 == 0 && sum2 % 2 != 0){

        cout << "1" << endl;

    } else {
        cout << "0" << endl;
    }

    return 0;
}
