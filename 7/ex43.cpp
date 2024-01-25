#include<iostream>

using namespace std;

/* You enter a rectangular matrix (2 rows and 5 columns) and print the following:
 * EX:
 * 2 5
 * 1 2 3 4 5
 * 6 7 8 9 10
 * Output:     Could also do this:
 * 1           1 7
 * 2 6         2 8
 * 3 7         3 9
 * 4 8         4 10
 * 5 9         5
 * 10   */

int main() {

    int m, n, f[100][100];
    cin >> m >> n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> f[i][j];
        }
    }

    cout << f[0][0] << endl;

    for (int j = 1; j < n; j++) {
        for (int i = 0; i - j < n && i < m; i++) {
            cout << f[i][j+i] << " ";
        }
        cout << endl;
    }

    return 0;
}