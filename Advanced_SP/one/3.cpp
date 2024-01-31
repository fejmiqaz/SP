#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int points, max_points;
        double sum = 0;
        cin >> points >> max_points;
        sum = (points * 100.0) / max_points;
        if (sum >= 90.0){
            cout << sum << " " << 10 << endl;
            continue;
        }else if (sum >= 80.0 && sum < 90.0){
            cout << sum << " " << 9 << endl;
            continue;
        }else if (sum >= 70.0 && sum < 80.0){
            cout << sum << " " << 8 << endl;
            continue;
        }else if (sum >= 60.0 && sum < 70.0){
            cout << sum << " " << 7 << endl;
            continue;
        }else if (sum >= 50.0 && sum < 60.0){
            cout << sum << " " << 6 << endl;
            continue;
        }else {
            cout << sum << " " << "FAIL" << endl;
            continue;
        }
    }

    return 0;
}

