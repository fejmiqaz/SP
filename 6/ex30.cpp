#include<iostream>

using namespace std;

/* You are tasked with analyzing product prices in a store to identify those above and below the average price.
 * The input consists of an integer n, representing the number of products, followed by n prices (of those products).
 * Your goal is to compute the average price of all products and then replace the prices below the average with 0 and prices
 * above the average (or equal) with 1.
 * Print the average prices as well as the transformed array (Check test cases).
 * Ex:
 * 5
 * 100 150 200 250 300
 * Output:
 * 0 0 1 1 1*/

int main() {
    int n, f[100];

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += f[i];
    }
    int average = 0;
    for(int i = 0; i < n; i++){
        average = sum / n;
        if(average > f[i]){
            cout << 0 << " ";
        }else{
            cout << 1 << " ";
        }
    }

    return 0;
}
/* int n, f[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    //int average = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += f[i];
    }
    int average;
    for (int i = 0; i < n; i++) {
        average = sum / n;
        if(average > f[i]){
            cout << 0 << " ";
        }else{
            cout << 1 << " ";
        }
    } */