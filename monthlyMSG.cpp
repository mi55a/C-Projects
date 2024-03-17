//
// Created by Mily Mendez on 3/11/24.
//
#include <iostream>

using namespace std;

int main() {
    // variable
    int month;
    // user message and getting user input
    cout << "Hello user to the monthly message program!" << endl;
    cout << "Enter a number that correlates with a month (For example: 1 for January): " << endl;
    cin >> month;
    // switch statement depending on month number
    switch (month) {
        case 1:
            cout << "Happy New Year and welcome January!";
            break;
        case 2:
            cout << "Happy Valentine's Day month! Find yourself someone!";
            break;
        case 3:
            cout << "Welcome spring break! Start wearing some warm clothes!";
            break;
        case 4:
            cout << "Celebrate Easter with bunnies and eggs!";
            break;
        case 5:
            cout << "School year is almost over! Get some tacos to celebrate Cinco de Mayo!";
            break;
        case 6:
            cout << "My birthday month! How fun! Hello summer break!";
            break;
        case 7:
            cout << "Happy July! Go to the beach and celebrate America!";
            break;
        case 8:
            cout << "Alexa, play august by Taylor Swift from the renowned album, folklore.";
            break;
        case 9:
            cout << "School is starting. Wake me up when September ends...";
            break;
        case 10:
            cout << "Get your costume on for Halloween!";
            break;
        case 11:
            cout << "Celebrate Thanksgiving with your family!";
            break;
        case 12:
            cout << "MERRY CHRISTMAS and hope you get lots of presents and warm clothes!";
            break;
            // if number is out of range
        default:
            cout << "Out of range, try again";
            break;
    }
    cout << endl;
}