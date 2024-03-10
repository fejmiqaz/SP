#include<iostream>

using namespace std;

/* Write a program that will read n pairs of natural numbers (n is read first, then the n pairs). It is necessary to check
 * for each read pair of numbers, whether all the digits of the first number appear in the second number.
 * If the condition is met, the program prints YES, otherwise NO.
 * Checking whether all the digits of one number appear in a second number should be done with the
 * function appears(int first, int second)*/

int appears(int first, int second){
    bool found = true;
    while(first--){
        int digit = first % 10;
        int temp = second;
        int dFound = false;
        while(temp--){
            if(temp%10 == digit){
                dFound = true;
                break;
            }
            temp/=10;
        }
        if(!dFound){
            found = false;
            break;
        }
        first/=10;
    }
    if(found == false){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }

}

int main() {
    int n, first, second;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> first >> second;
        appears(first,second);
    }


    return 0;
}
