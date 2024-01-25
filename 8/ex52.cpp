#include<iostream>
using namespace std;

/* A positive integer is given. Your task is to write a program that will check if the number is zig-zag, or rather if
 * the digits of the number are alternately larger - smaller digit. Ex: 12121 (1 < 2, 2 > 1, 1 > 2  ... ).
 * If the number is zigzag print 1, otherwise 0.
 * The zigzag function must be recursive, otherwise half of the points are won.
 * INPUT: 12121
 * OUTPUT: 1 */

int ZigZag(int n){
    if( n < 100 ){
        return 0;
    }
    int d1 = n % 10;
    n/=10;
    int d2 = n % 10;
    n/=10;
    int d3 = n % 10;

    if( d1 < d2 && d2 > d3){
        cout << 1;
    }else{
        cout << 0;
    }
    return ZigZag(n/10);
}

int main(){

    int n;
    cin >> n;


    ZigZag(n);

    return 0;
}
/*bool ZigZag(bool zigzag, int x){
    if(x <= 9){
        return zigzag;
    }
    while(x > 0){
        int ld = x % 10;
        int sld = (x % 100) / 10;
        int tld = (x % 1000) / 100;

        if (sld > ld && sld > tld) {
            cout << 1 << endl;
        }else{
            return "0";
        }
        return ZigZag(true, x/10);
    }
}*/