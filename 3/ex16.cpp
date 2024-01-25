#include<iostream>
using namespace std;

int main() {
    int g1, g2, g3, g4, g5, g6;
    float a5, a6;
    cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;
    a5 = (g1+g2+g3+g4+g5)/5.0;
    a6 = (g1+g2+g3+g4+g5+ g6)/6.0;

    if (a6>a5){
        cout << "Enrolled 6 subjects"<< endl;
        if(a6 >= 8.5){
            cout << 1;
        }else {
            cout << 0;
        }
    }

    if (a5 > a6){
        cout << "Enrolled 5 subjects" << endl;
        cout << 0;
    }


    return 0;
}


