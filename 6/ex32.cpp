#include<iostream>
using namespace std;

/* From SI, a whole number N is read. Then, N arrays of integers are read (each with a maximum length of 100 elements).
 * For each array, the length of the array is first entered, followed by all the elements of the array.
 *
 * Write a program that, for each array, will print the percentage of mirrored equal numbers in the array.
 * Mirrored numbers in an array are the first and last, second and second-to-last, and so on.
 * If the array has an odd number of elements, the middle element is also mirrored and equal.
 *
 * Example input:
 * 3
 * 5 7 2 5 2 8
 * 6 1 2 3 3 1 1
 * 8 8 4 8 3 2 1 4 8
 *
 * Example output and explanation:
 * 60.00% ( 2,2,5 are mirrored and equal -> 3/5 elements -> 60%)
 * 66.67% (1, 1, 3, 3 are mirrored and equal -> 4/6 elements -> 66.67%)
 * 50.00%(8,8,4,4 are mirrored and equal -> 4/8 elements -> 50.00%)*/
//(float(mirroredNumbers)/n)*100.0

bool mirroredNum(int a, int b){
    if(a == b){
        return true;
    }
    return false;
}

int main(){
    int numArrays; cin >> numArrays;
    for(int k = 0; k < numArrays; k++){
        int n, f[100]; cin >> n;
        for(int i = 0; i < n; i++){
            cin >> f[i];
        }
        int temp = n;
        int mirroredNums = 0;
        for(int i = 0; i < temp; i++){
            if(mirroredNum(f[i],f[temp-1])){
                mirroredNums++;
                if(i != temp - 1){
                    mirroredNums++;
                }
            }
            temp--;
        }
        cout << (float(mirroredNums)/n) * 100.0;
    }

    return 0;
}
