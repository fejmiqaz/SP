#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if (A + B + C == 180) {
        cout << "YES" << endl;
        if (A > 90 || B > 90 || C > 90){
            cout << "OBTUSE" << endl;
        } else if (A == 90 || B == 90 || C == 90){
            cout << "RIGHT" << endl;
        } else {
            cout << "ACUTE" << endl;
        }
        return 0;
    }
    cout << "NO" << endl;

    return 0;
}