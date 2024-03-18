//
// Created by Mily Mendez on 3/17/24.
//
#include <iostream>

using namespace std;

int main() {
    // variables
    int hours;
    int speed;
    // getting user input
    cout << "What is the speed of the vehicle in mph?" << endl;
    cin >> speed;
    cout << "How many hours has it traveled?" << endl;
    cin >> hours;
// for loop
    for(int i = 1; i <= hours; i++) {
        float distance = speed * i;
        // result
        cout << "Hour: " << i << " and distance traveled: " << distance << endl;
    }

}