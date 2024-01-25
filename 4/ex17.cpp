#include<iostream>

using namespace std;

/*Read from SI two integers a and b.
* Write a program that will print all even numbers that are divisible by 7,
* and all odd numbers that are not divisible by 3 in the range(a, b].
* If such numbers don't exist, print 0,
* otherwise print the numbers and print the percentage of the numbers that meet the conditions.
* Input:  //  Output:
* 1 7     //  5
*         //  7
*         //  33.3333%
* */
int main() {
    int a,b, number = 0;
    cin >> a >> b;
    for(int i = a +1; i <= b; i++){
        if(i % 2 == 0 && i % 7 == 0){
            cout << i << endl;
            number++;
        } else if (i % 2 != 0 && i % 3 != 0){
            cout << i << endl;
            number++;
        }
    }
    if(number > 0){
        cout << ((float)number / (float)(b-a)*100.0) << "%" << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}

/* int a, b, num = 0;
    cin >> a >> b;
    for (int i = a + 1; i <= b; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            cout << i << endl;
            num++;
        } else if (i % 2 != 0 && i % 3 != 0) {
            cout << i << endl;
            num++;
        }
    }
    if (num > 0){
        cout << ((float)num / (float)(b-a)*100.0)<< "%" << endl;
    }else {
        cout << 0;
    } */

