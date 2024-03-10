#include<iostream>
using namespace std;
/* Enter a matrix and find the column with the largest sum and add that value to that element column */
int main(){

    int m,n, f[100][100];
    cin  >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> f[i][j];
        }
    }
    int maxSum = 0, sum = 0, columnIndex = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum += f[i][j];
            if(sum > maxSum){
                maxSum = sum;
                columnIndex = j;
            }
        }
    }

    for(int i = 0; i < n; i++){
        f[i][columnIndex] += maxSum;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
