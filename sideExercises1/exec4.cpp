#include <iostream>
using namespace std;

int main() {
    int N, num, min = -1, tmp, i;
    cin >> N;

    for ( i = 0; i < N; i++){
        cin >> num;
        tmp = num;
        while( tmp > 9){
            if (tmp % 10 >= (tmp / 10) % 10) break;
            tmp /= 10;
        }
        if (tmp < 10) {
            cout << num << endl;
            if (min == -1) min = num;
            else if ( num < min) min = num;
        }

    }


    cout << min;
    return 0;
}
