//
// Created by Mily Mendez on 3/17/24.
//
#include <iostream>

using namespace std;

int main() {
    // variables
    int number;
    int sum = 0;
    // getting input and input validation
    cout << "Hello user, please enter a positive integer: " << endl;
    cin >> number;
    if (number < 0) {
        cout << "Hello user, please enter a positive integer: " << endl;
        cin >> number;
    }
    // displays number
    cout << "Your number is: " << number << endl;
    // for loop
    for(int i = 1;i <= number;i++) {
        sum+=i;
    }
    // displaying result
    cout << "Your sum is: " << sum;
}