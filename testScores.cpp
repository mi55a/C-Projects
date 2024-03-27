//
// Created by Mily Mendez on 3/26/24.
//
#include <iostream>

using namespace std;
// functions prototypes
float calcAverage(float first, float second, float third, float fourth, float fifth);
void determineGrade(float test);

int main() {
    // variables
    float firstScore;
    float secondScore;
    float thirdScore;
    float fourthScore;
    float fifthScore;

    // welcoming user and getting input from user. After getting input, it calls grade function for each input
    cout << "Welcome user to the test score calculator! It'll give each test a grade and the average of all your exams!" << endl;
    cout << "Type first score: " << endl;
    cin >> firstScore;
    determineGrade(firstScore);
    cout << "Type second score: " << endl;
    cin >> secondScore;
    determineGrade(secondScore);
    cout << "Type third score: " << endl;
    cin >> thirdScore;
    determineGrade(thirdScore);
    cout << "Type fourth score: " << endl;
    cin >> fourthScore;
    determineGrade(fourthScore);
    cout << "Type fifth score: " << endl;
    cin >> fifthScore;
    determineGrade(fifthScore);
    // calling calcAverage
    calcAverage(firstScore, secondScore, thirdScore, fourthScore, fifthScore);


}
// first function
float calcAverage(float first, float second, float third, float fourth, float fifth) {
    // average variable and displaying result
    float averageTest;
    float sum = 0;
    sum = first + second + third + fourth + fifth;
    averageTest = sum / 5;

    cout << "Your test score average is: " << averageTest << endl;
}
void determineGrade(float test) {
    // conditional for test grades
    if (test >= 90 && test <= 100) {
        cout << "Your grade is an A!" << endl;
    } else if (test >= 80 && test < 90) {
        cout << "Your grade is a B!" << endl;
    } else if (test >= 70 && test < 80) {
        cout << "Your grade is a C!" << endl;
    } else if (test >= 60 && test < 70) {
        cout << "Your grade is a D!" << endl;
    } else {
        cout << "Your grade is an F!" << endl;
    }
}