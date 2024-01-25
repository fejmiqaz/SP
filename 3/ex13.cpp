#include<iostream>
using namespace std;

/* From SI read 2 phone numbers and the time of call in minutes. Calculate the price of the call, if we know that
 * the first 30minutes are priced at 3den/min, and after 30min the price is 2den/min.
 * If the two numbers are from the same operator, give 30% discount.
 *
 * operator1 = (071, 072, 073)
 * operator2 = (074, 075, 076) */

int main(){

    int number1, number2, time;
    double sum = 0.0, total_price = 0.0;
    cin >> number1 >> number2 >> time;

    int thirdDigit1 = (number1 / 1000000) % 10; // get the 07n321123 from number 1
    int thirdDigit2 = (number2 / 1000000) % 10; // also do the same with number 2

    if (time >= 30){
        int firstStep = (time - 30);
        int secondStep = time - firstStep;

        if (time >= 30){
            firstStep = firstStep * 2;
            secondStep = secondStep * 3;
            sum += secondStep + firstStep;
            if (number1 > 0 && number1 <= 999999999 && number2 > 0 && number2 <= 999999999){
                if (((thirdDigit1 == 1 || thirdDigit1 == 2 || thirdDigit1 == 3) && (thirdDigit2 == 1 || thirdDigit2 == 2 || thirdDigit2 == 3))){ // Operator 1
                    total_price = sum * 0.3;
                    cout << total_price;
                } else if (((thirdDigit1 == 4 || thirdDigit1 == 5 || thirdDigit1 == 6) && (thirdDigit2 == 4 || thirdDigit2 == 5 || thirdDigit2 == 6))){ // Operator 2
                    total_price = sum * 0.3;
                    cout << total_price << endl;
                } else {
                    total_price += sum;
                    cout << total_price;
                }
            }
        }
    } else {
        total_price += time * 3;

        cout << total_price;
        if (number1 > 0 && number1 <= 999999999 && number2 > 0 && number2 <= 999999999){
            if (((thirdDigit1 == 1 || thirdDigit1 == 2 || thirdDigit1 == 3) && (thirdDigit2 == 1 || thirdDigit2 == 2 || thirdDigit2 == 3))){ // Operator 1
                total_price = total_price * 0.3;
                cout << total_price;
            } else if (((thirdDigit1 == 4 || thirdDigit1 == 5 || thirdDigit1 == 6) && (thirdDigit2 == 4 || thirdDigit2 == 5 || thirdDigit2 == 6))){ // Operator 2
                total_price = total_price * 0.3;
                cout << total_price << endl;
            } else {
                total_price += sum;
                cout << total_price;
            }
        }// If the time of the call is less than 30 mins
        sum = time * 3;
        total_price += sum;
    }

    cout << total_price;
    return 0;
}