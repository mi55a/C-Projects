//
// Created by Mily Mendez on 4/3/24.
//
#include <iostream>

using namespace std;

int main() {
    // variables
    int z;
    int sum = 0;
    int arrDays[6] = {};
    cout << "Welcome user to the total sales program! This program will ask you for your store's sales for each day of the week!" << endl;
    // for loop for inputs from user. To person reading this: I like the efficient way I was shown but this one looks cool so I'll keep it for my Github!
    for(z = 0; z < 7; z++) {
        if(z == 0) {
            cout << "Sales for Monday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else if(z == 1) {
            cout << "Sales for Tuesday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else if(z == 2) {
            cout << "Sales for Wednesday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else if(z == 3) {
            cout << "Sales for Thursday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else if(z == 4) {
            cout << "Sales for Friday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else if(z == 5) {
            cout << "Sales for Saturday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        } else {
            cout << "Sales for Sunday: " << endl;
            cin >> arrDays[z];
            sum+=arrDays[z];
        }

    }
    // displays result
    cout << "Your total sales for the week are: " << sum << endl;






}