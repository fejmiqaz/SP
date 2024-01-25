#include<iostream>
#include<cmath>
using namespace std;

/* We define the value d for a triplet of integers a, b, and c, in such a way that it is calculated as the sum of the
 * absolute differences between the first and second number on one side, and the second and third number on the other side:
d = |a -b| + |b - c|
Write a program that reads N triplets of integers from the keyboard (N is entered from the keyboard), and that finds
 and prints the smallest value for d among the read triplets. The value of d for each triplet is calculated IN A FUNCTION.
Example:
Input:
3
123
22 30 22
111
Output:
0
Explanation:
For the triplet 1 2 3, the value of d is: |(1-2)| + 1(2-3)| = 2
For the triplet 22 30 22, the value of d is: |(22-30)] + 1(30-22)| = 16
For the triplet 1 1 1, the value of d is: (1-1)| + |(1-1)| = 0
Minimum value of d: 0 */

int minValue(int enter){
    int a,b,c;
    int min = 0;
    for(int i = 0; i < enter; i++){
        cin >> a >> b >> c;
        int d = abs(a-b) + (abs(b-c));
        min = d;
        if(d < min){
            min = d;
        }
    }
    cout << min << endl;
}


int main(){
    int enter;
    cin >> enter;
    minValue(enter);

    return 0;
}
