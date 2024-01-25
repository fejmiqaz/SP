#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int num1, num2, num3, temp, counter;
    cin >> num1;
    for (int i = 0; i < num1; i++){


        if(cin >> num2 >> num3){
            temp = num2;
            while (temp != 0){
                temp/=10;
                counter++;
            }


            int lD = num2 % 10;
            num2 /= 10;
            int num4 = lD * pow(10, counter - 1) + num2;
            counter = 0;

            if(num4 > num3){
                cout << "YES" << endl;
            }else if(num4 < num3) {
                cout << "NO" << endl;
                continue;
            }

        }
    }

    return 0;
}