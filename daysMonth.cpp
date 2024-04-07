//
// Created by Mily Mendez on 4/6/24.
//
#include <iostream>

using namespace std;

int main() {
    // variables and arrays
    int z;
    string days[12] = {"January", "February", "March", "April", "May", "June", "July",
                       "August", "September", "October", "November", "December"};
    int numberDays[12] = {31, 28,31, 30, 31,30, 31,
                          31,30,31,30,31};
    // for loop
    for(z=0;z < 12;z++) {
        cout << days[z] << " has these many days: " << numberDays[z] << endl;
    }
}