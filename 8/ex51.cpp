#include<iostream>
using namespace std;

/* Write a recursive function that prints out the number of occurrences of a number k in an array of N elements
 * (N is read from SI, as well as the array). If the array doesn't contain the number k, print 0.*/

/*int searchOccurence(int a[], int x, int y){
    if(x == 0){
        return 0;
    }
    if(a[0] == y){
        return 1 + searchOccurence(a+1,x-1,y);
    }
    return searchOccurence(a+1,x-1,y);
}*/

int searchOccurrence(int a[], int x, int y){
  if(x == 0){
      return 0;
  }
  if(a[0] == y){
      return 1 + searchOccurrence(a+1, x-1, y);
  }
  return searchOccurrence(a+1,x-1,y);

}

int main(){

    int n, k, f[100];
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }
    cin >> k;

    cout << searchOccurrence(f,n,k);


    return 0;
}