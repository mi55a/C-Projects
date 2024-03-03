//
// Created by Mily Mendez on 2/24/24.
//
#include <iostream>

using namespace std;

int main(){
    // welcoming user
    cout << "Welcome, user, to the MPG calculator!" << endl;
    // variables
    double miles;
    double gallons;
    // getting input from user and displaying
    cout << "Number of miles driven: ";
    cin >> miles;
    cout << "Your miles are:  " << miles << endl;
    cout << "Number of gallons used: ";
    cin >> gallons;
    cout << "Your gallon amount is:  " << gallons << endl;
    // calculating MPG
    double mPG = miles / gallons;
    // displays result
    cout << "Your miles per gallon are: " << mPG << endl;
}


