#include <iostream>
using namespace std;

int main() {
    int i, j, N;
    cin >> N;

    for (i = 1; i <= N; i++){
        for (j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
        for (j = i; j > 0; j--){
            cout << j;
        }
        cout << endl;

    }
    return 0;
}
