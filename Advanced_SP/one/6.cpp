#include<iostream>
using namespace std;

int main(){
    int z, a, b, count = 0, total = 0;
    float percentage;

    cin >> z >> a >> b;

    if(a == b && b == 0){
        cout << "You entered 0 pairs that equal to " << z << endl;
        cout << "The percentage of the pairs with sum " << z << " is 0%" << endl;
        return 0;
    }
    while (a != 0 || b != 0){
        total++;
        if (a + b == z){
            count++;
        }
        cin >> a >> b;
        percentage = count * 1.0 / total * 100;
    }
    cout << "You entered " << count << " pairs of numbers that have a sum equal to " << z << endl;
    cout << "The percentage of pairs with sum " << z << " is " <<  percentage << "%" << endl;

    return 0;
}