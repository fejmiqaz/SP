#include<iostream>
using namespace std;

/* Write a program that calculates the prices for cinema tickets. The prices vary from the category of the films and the age.
 * For films in category 1 prices are: 8$ for all ages.
 * Category 2: 8$ for clients under than 12, and 12$ for clients older than 12 years.
 * Category 3: 10$ for clients under 12, and 15$ for 12 or over.
 * Category 4: 15$ for clients under 17, 18$ for 17 or over.
 *
 * From SI are read category and age of the client. Print the price of the ticket.*/

int main() {
    int category, age;
    cin >> category >> age;

    if (category == 1 && age > 0){
        cout << "Price: 8$" << endl;
    } else if (category == 2 && age < 12){
        cout << "Price: 8$" << endl;
    } else if (category == 2 && age >= 12) {
        cout << "Price: 12$" << endl;
    } else if (category == 3 && age < 12){
        cout << "Price: 10$" << endl;
    }else if (category == 3 && age >= 12){
        cout << "Price :15$" << endl;
    }else if (category == 4 && age < 17){
        cout << "Price: 15$" << endl;
    }else {
        cout << "18$" << endl;
    }


    return 0;
}