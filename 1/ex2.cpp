#include<iostream>
using namespace std;

int main() {
    //Writing a program that reads days as integers and prints them as years, months and days
    int days, years, months;

    cin >> days;

    years = days / 365;
    months = (days % 365) / 30;
    days = (days % 365) % 30;

    cout << "Years: " << years << ", months: " << months << ", days: " << days;



    return 0;
}