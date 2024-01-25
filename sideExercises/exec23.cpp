#include<iostream>
using namespace std;

/* The dimensions of a matrix (m<100 and n<100) and its integer elements are read from SI.
 * Print all the elements from the matrix that satisfy the condition: the sum of the remaining elements in the
 * corresponding row and column where the element is located is an odd number. The numbers should be printed from the
 * left to right and from top to bottom.
Input:
3 3
1 2 3
4 5 6
7 8 9
Output:
2 4 6 8
Explanation: 2 is in the first row, second column.
 The rest of the numbers that lay in the first row are 1 and 3,
 and the numbers in the second column are 5 and 8, so 1+3+5+8 is odd, and 2 is printed. 4 -> 1+7+5+6 is odd, ... */

int main(){
    int n,m,f[100][100];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            cin >> f[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            int sum = 0;

            for(int k = 0; k < n; k++){
                if(k!=i){
                    sum += f[k][j];
                }
            }
            for(int k = 0; k < m; k++){
                if(k!=j){
                    sum += f[i][k];
                }
            }

            if(sum % 2 == 1){
                cout << f[i][j] << " ";
            }
        }

    }

    return 0;
}
