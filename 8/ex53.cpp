#include<iostream>
using namespace std;

/* An array of N elements and an array of M elements are entered from SI respectively. Your task is to concatenate the
 * two arrays into a third sorted array in ascending order.
 * Explanation: First the length of the array of M elements, then the first array is read, then the length of the second
 * array N is entered, then the array.
 * Note: The elements in both input arrays are sorted. The maximum length of the arrays is 100 elements.*/

/* void sortedArray(int n, int m, int a[], int b[], int c[], int i = 0, int j = 0, int k = 0 ){
    if(i >= n && j >= m){
        return ;
    }
    if( i < n && j < m){
        if(a[i] <= b[j]){
            c[k] = a[i];
            sortedArray(n,m,a,b,c,i+1,j,k+1);
        }else{
            c[k] = b[j];
            sortedArray(n,m,a,b,c,i,j+1,k+1);
        }
    }else if( i < n){
        c[k] = a[i];
        sortedArray(n,m,a,b,c,i+1,j,k+1);
    }else{
        c[k] = b[j];
        sortedArray(n,m,a,b,c,i,j+1,k+1);
    } */

void sortedArray(int n, int m, int f[100], int q[100], int e[100], int i = 0, int j = 0, int k = 0){
    if(i >= n && j >= m){
        return ;
    }
    if(i < n && j < m){
        if(f[i] < q[j]){
            e[k] = f[i];
            sortedArray(n,m,f,q,e,i+1,j,k+1);
        }else{
            e[k] = q[j];
            sortedArray(n,m,f,q,e,i,j+1,k+1);
        }
    }else if( i < n){
        e[k] = f[i];
        sortedArray(n,m,f,q,e,i+1,j,k+1);
    }else{
        e[k] = q[j];
        sortedArray(n,m,f,q,e,i,j+1,k+1);
    }
}

int main(){
    int n,m,f[100],q[100], e[100];
    cin >> n >> m;
    for(int i = 0; i < n;i++){
        cin >> f[i];
    }
    for(int i = 0; i < m;i++){
        cin >> q[i];
    }
    int size = n + m;
    sortedArray(n,m,f,e,q);
    for(int i = 0; i < size; i++){
        cout << e[i] << " ";
    }
    cout << endl;


    return 0;
}
/* int n, m, a[100], b[100], c[100];

    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int size = n + m;

    sortedArray(n,m,a,b,c);

    for(int i = 0; i < size; i++){
        cout << c[i] << " ";
    }
    cout << endl; */