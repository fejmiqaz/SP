#include <iostream>
using namespace std;

/*  At university, it's time to enroll new students. For a student to enroll, he should arrive at the faculty before 9 a.m.
    and wait in line to be served by the student service. Student service starts working from 9 o'clock,
    works 2 hours, takes a break of 30 minutes, works 1 hour, takes a break of 30 minutes, works 2 hours,
    and its working time ends.
    Student service needs exactly 5 minutes to serve 1 student.

    Your task is, if you know which number a certain student is in line, to print the time in hours and minutes,
    that he will be waiting to be served, or "Student will not be served at all" if he won't be served at all because
    the working hours of the student service will end... */
int main() {
    int line;
    const int fB = 120;
    const int sB = 210;
    const int endOfDay = 360;

    cin >> line;
    int passedTime = 0;

    for (int i = 0; i < line; i++){
        if (passedTime == fB){
            passedTime += 30;
        } else if (passedTime == sB){
            passedTime += 30;
        } else {
            passedTime += 5;
        }
    }
    if (passedTime >= 60){
        if (passedTime > endOfDay){
            cout << "Come back tomorrow!" << endl;
        } else {
            int hours = passedTime / 60;
            int minutes = passedTime % 60;
            cout << "The wait was " << hours << " and " << minutes << endl;
        }
    } else {
        cout << "The wait was " << passedTime << " and minutes." << endl;
    }

    return 0;
}
