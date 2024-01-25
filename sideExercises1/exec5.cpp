#include<iostream>
using namespace std;

int main(){
    int todayDate, birthDate;

    cin >> todayDate >> birthDate;
    int todayMonth = (todayDate / 10000) % 100, birthMonth = (birthDate / 10000) % 100;
    int todayYear = (todayDate % 10000), birthYear = (birthDate % 10000);

    int age = todayYear - birthYear;
    if (age >= 18) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}