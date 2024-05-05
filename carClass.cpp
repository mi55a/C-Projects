//
// Created by Mily Mendez on 5/3/24.
//
#include <iostream>
#include <string>
using namespace std;
// Car class
class Car {
public:
    int year;
    string make;
    int speed;


// variables for the class

    // constructor
    Car(int carYear, string carMake) {
        year = carYear;
        make = carMake;
        speed = 0;
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
    Car firstCar(2024, "BMW");
    firstCar.speed = 300;

    // loops
    for(int i = 0; i < 5;i++) {
        firstCar.accelerate();
        cout << "Current speed: " << firstCar.getSpeed() << endl;
    }
    // displays result for speed after accelerate function

    for(int i = 0; i < 5;i++) {
        firstCar.brake();
        cout << "Current speed: " << firstCar.getSpeed() << endl;
    }
    // displays result for speed after brake function

    // prints object
    firstCar.print();

    return 0;

}
