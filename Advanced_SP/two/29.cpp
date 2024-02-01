#include<iostream>
using namespace std;

int main() {
    int n, f[100][100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }
    int a = 2, b = 2, sum = 0;
    while (a < n && b < n) {
        int sum1 = 0;
        for (int k = 0; k <= a; k++) {
            sum1 += f[k][0];
        }
        for (int s = 0; s < b; s++) {
            sum1 += f[0][s];
        }
        for (int k = 0; k < a; k++) {
            sum1 += f[a - k - 1][b];
        }
        sum += sum1;
        a++;
        b++;

    }
    cout << sum << endl;
    return 0;
}