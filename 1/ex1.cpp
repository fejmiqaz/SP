#include<iostream>
using namespace std;

int main() {

    // We are calculating the square of the hypotenuse
    int leg1, leg2;
    cin >> leg1 >> leg2;
    int cSquared = (leg1*leg1) + (leg2*leg1);

    //We are calculating the area of the triangle
    int base;
    int height;
    cin >> base >> height;
    double area = 0.5 * base * height;

    cout << "The square of the hypotenuse is: " << cSquared << endl;
    cout << "The area of the triangle is: " << area;

    return 0;
}
