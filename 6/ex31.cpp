#include<iostream>
using namespace std;

/* Write a program to find the subarray with the largest sum of elements and print that sum.
 * Additionally, find and print the percentage of elements used in the subarray compared to the total number of elements
 * in the array.
 * Ex:
 * 10
 * -2 1 -3 4 -1 2 1 -5 4 2
 * Output:
 * Maximum Sum: 7
 * Percentage of elements: 70% */
// percentage = (float(sum) / n) * 100.0;

int main(){
    int n, f[100];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    int totalSum = 0;
    for(int i = 0; i < n; i++){
        totalSum += f[i];
    }

    int sum = 0;
    double percentage = 0;
    for(int i = 3; i < n; i++){
        sum+=f[i];
        percentage = (float(sum) / n) * 100.0;
    }
    cout << "Max sum: " << sum << endl;
    cout << "Pecentage: " << percentage << "%"<< endl;


    return 0;
}
