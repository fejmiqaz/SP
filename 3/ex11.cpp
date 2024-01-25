#include<iostream>
using namespace std;
/* A progressive personal income tax has been introduced in the country.
    It is necessary to write a program that will help the employees of the IRS of the state to calculate the tax of certain citizens.
   From the standard input, 5 numbers percent0, threshold1, percent1, threshold2, percent 2 of the citizen are first read.
   The amount of personal income tax calculated with a progressive rate should be printed on the screen.
   Explanation of the example

   The first 1000 is taxed at 10%, the next 1500 is taxed at 20% and the remaining 1300 is taxed at 30%.
   Result 1000*0.1+1500*0.2+1300*0.3 = 790. */

int main() {

    float p1, t1, p2, t2, salary;
    float percentageLeft;
    double sum = 0;
    cin >> p1 >> t1 >> p2 >> t2 >> percentageLeft >> salary;
    t2 -= t1;
    if ( salary > t1){
        sum += t1 * p1 / 100.0;
        salary -= t1;
    } else {
        sum += salary * p1 / 100.0;
    }
    if (salary > t2){
        sum += t2 * p2 / 100.0;
        salary -= t2;
    }else {
        sum += salary * p2 / 100.0;
        salary = 0;
    }
    sum += salary * percentageLeft / 100.0;
    cout << sum << endl;
    return 0;
}