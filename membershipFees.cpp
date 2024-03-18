//
// Created by Mily Mendez on 3/17/24.
//
#include <iostream>

using namespace std;

int main() {
    // variables
    float membership = 2500;
    float raise = 0.04;
    float newMember = membership;
    // loop
    for(int i = 1; i <= 6; i++) {
        newMember *= (1+raise);
        // displays results for the next 6 years
        cout << "Year: " << i << " and membership price:$ "<< newMember << endl;
    }

}