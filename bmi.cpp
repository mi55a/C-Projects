//
// Created by Mily Mendez on 3/9/24.
//
#include <iostream>

using namespace std;

int main(){
    // variables
    float weight;
    float height;
    // asking for user input and displaying
    cout << "Hello user, to the BMI calculator." << endl;
    cout << "Please enter your weight in pounds: " << endl;
    cin >> weight;
    cout << "Your weight in pounds: " << weight << endl;
    cout << "Enter your height in inches: " << endl;
    cin >> height;
    cout << "Your height in inches:  " << height << endl;
    // formula
    float bmi = weight * 703 / (height * height);
    // decision making and displaying result
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "Your BMI, "<< bmi <<", says you're optimal." << endl;
    } else if (bmi < 18.5) {
        cout << "Your BMI, "<< bmi <<",  says you're underweight." << endl;
    } else {
        cout << "Your BMI, "<< bmi <<",  says you're overweight." << endl;
    }
}