#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    for (; m <= n; m++){
        int temp = m;
        bool blah = true;
        while (temp > 0){
            if(temp % 2 != 0){
                blah = false;
                break;
            }
            temp /= 10;
        }
        if (blah){
            cout << m << endl;
            return 0;
        }
    }
    cout << "NSN" << endl;
    return 0;
}