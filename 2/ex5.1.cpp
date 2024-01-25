#include<iostream>
using namespace std;

int main() {
    int a1, a2, a3, a4, a5, sum = 0;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    sum = a1 + a2 + a3 + a4 + a5;
    if (sum < 50){
        cout << "Predmetot ne e polozen";
        return 0;
    } else if (sum >= 50 && sum < 60){
        cout << "Ocenka: " << 6 << ", poeni: " << sum << endl;
    } else if (sum >= 60 && sum < 70){
        cout << "Ocenka: " << 7 << ", poeni: " << sum << endl;
    } else if (sum >= 70 && sum <= 80){
        cout << "Ocenka: " << 8 << ", poeni: " << sum << endl;
    } else if (sum >= 80 && sum < 90){
        cout << "Ocenka: " << 9 << ", poeni: " << sum << endl;
    } else if (sum >= 90 && sum <= 100){
        cout << "Ocenka: " << 10 << ", poeni: " << sum << endl;
        return 0;
    }
    sum = sum % 10;
    if ( sum == 0 ) {
        cout << "Ima uslov za povisoka ocenka" << endl;
    } else if ( sum != 0 ){
        cout << "Nema uslov za povisoka ocenka";
    }
    return 0;
}

