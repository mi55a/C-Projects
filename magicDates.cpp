//
// Created by Mily Mendez on 3/9/24.
//
#include <iostream>

using namespace std;

int main(){
    // variables
    int month;
    int year;
    int day;
    // user message and getting input and displaying inputs
    cout << "Hello, welcome to the magic date program." << endl;
    cout << "Enter a month in numeric form (for example: 1): " << endl;
    cin >> month;
    cout << "Your month is: " << month << endl;
    cout << "Enter a day(from 1 to 31): " << endl;
    cin >> day;
    cout << "Your day is: " << day << endl;
    cout << "Enter a two-digit year: " << endl;
    cin >> year;
    cout << "Your year is: " << month << endl;
    // if else statements if it's a magic date
    if (month * day == year){
        cout << "Your date, " << month << "/" << day << "/" << year << " is magical!" << endl;
    } else {
        cout << "Your date, " << month << "/" << day << "/" << year << " is not magical! Try again next time" << endl;
    }
}