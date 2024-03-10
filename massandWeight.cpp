//
// Created by Mily Mendez on 3/9/24.
//
#include <iostream>

using namespace std;

int main() {
    // mass variable
    float mass;
    // getting user input
    cout << "Hello user to the mass and weight calculator!" << endl;
    cout << "What is your item's mass?" << endl;
    cin >> mass;
    cout << "your item's mass is: " << mass << endl;
    // formula
    float weight = mass * 9.8;
    // decision making and displaying result
    if (weight > 10000) {
        cout << "Item is too heavy b/c the item's weight is: " << weight << endl;
    } else if(weight < 10) {
        cout << "Item is too light b/c the item's weight is: " << weight << endl;
    } else {
        cout << "Item is in range b/c the item's weight is: " << weight << endl;
    }

}