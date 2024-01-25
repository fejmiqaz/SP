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

/* int Appears(int first, int second){
    bool found = true; // declare a flag
        while(first > 0){ // check if it's bigger than 0
            int digit = first % 10; // get the last digit
            int temp = second; // set a temp for 2nd digit
            int dFound = false; // set another flag

            while(temp>0){ // check if the second number is greater than 0
                if(temp%10==digit){ // check if the last number of the 2nd number is the same as first number's last
                    dFound = true; // set the flag to true
                    break; // if true, stop the loop
                }
                temp/=10; // remove the last number of the second num temp variable
            }
            if(!dFound){
                found = false;
                break;
            }
            first/=10;
        }
        if (found == false){ // if the numbers don't appear in the second
            cout << "NO" << endl; // print NO
        }else {
            cout << "YES" << endl; // otherwise print yes
        }
        return 0;
    }

    int n, first, second;
    cin >> n;
    for(int i = 0; i < n; ++i){ // preincrement and start from 1
        cin >> first >> second; // enter the range
        Appears(first, second); // use the function to check for the biggest palindrome within the range
    }*/