#include<iostream>
using namespace std;

/* A number N is read from SI, followed by an array of N elements. To define a function int isInteresting(int num) which
 * will return 1 if the number is interesting. An interesting number if it is an even-odd digit number. Otherwise, it
 * returns 0.
 * Define a void function printArray(int a[], int n) that will print all the numbers in the array that are interesting.
 * Example:
 * 1634, 678, 141858.
 * To win all the points from the task, it is required that the printArray function to be recursive.*/

/*void printArray(int f[], int n, int i = 0){
    if( n == 0){
        return ;
    }
    cout << f[i] << " ";
    return printArray(f,n,i+1);
}

bool isInteresting(int f[], int n, int i = 0){
    if(i >= n - 2){
        cout << 1;
        return true;
    }
    if(f[i] % 2 == 0 && f[i + 1] % 2 != 0 && f[i + 2] % 2 == 0 ||
    f[i] % 2 != 0  && f[i + 1 ] % 2 == 0 && f[i+2] % 2 !=0){
        return isInteresting(f,n,i + 1);
    }else{
        cout << 0;
        return false;
    }
}*/
void printArray(int f[], int n, int i = 0){
    if(n == 0){
        return ;
    }
    cout << f[i] << " ";
    return printArray(f,n,i+1);
}

bool isInteresting(int f[], int n, int i = 0){
    if (n >= n - 2){
        cout << 1;
        return true;
    }
    if(f[i] % 2 == 0 && f[i + 1] % 2 != 0 && f[i + 2] % 2 == 0 ||
    f[i] % 2 != 0 && f[i + 1] % 2 == 0 && f[i + 2] % 2 != 0){
        printArray(f, n);
        return isInteresting(f,n,i+1);
    }else{
        cout << 0;
        return false;
    }
}

int main(){

    int n, f[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    isInteresting(f, n);

    return 0;
}