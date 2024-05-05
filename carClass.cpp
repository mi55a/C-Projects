//
// Created by Mily Mendez on 5/3/24.
//
#include <iostream>
#include <string>
using namespace std;
// Car class
class Car {
public:
    // variables for the class
    int year;
    string make;
    int speed;
    // constructor, 0 initialized for speed in parameter)
    Car(int x, string y, int z = 0) {
        year = x;
        make = y;
        speed = z;
    }
    // getter functions
    int getYear() {
        return year;
    }
    string getMake() {
        return make;
    }
    int getSpeed() {
        return speed;
    }
    // functions
    // add 5 to speed
    void accelerate() {
        // getSpeed();
        speed += 5;
    }
    // subtracts 5 from speed
    void brake() {
        // getSpeed();
        speed -= 5;
    }
    // prints object
    void print() {
        cout << getSpeed() << endl;
        cout << getMake() << endl;
        cout << getYear() << endl;
    }
};
int main() {
    // sample object
    Car firstCar(2024, "BMW", 300);
    firstCar.accelerate();
    firstCar.accelerate();
    firstCar.accelerate();
    firstCar.accelerate();
    firstCar.accelerate();
    // displays result for speed after 5 accelerate functions
    cout << "Current speed: " << firstCar.getSpeed() << endl;
    firstCar.brake();
    firstCar.brake();
    firstCar.brake();
    firstCar.brake();
    firstCar.brake();
    // displays result for speed after 5 brake functions
    cout << "Current speed: " << firstCar.getSpeed() << endl;
    // prints object
    firstCar.print();

    return 0;

}
