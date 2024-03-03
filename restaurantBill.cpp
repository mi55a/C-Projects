//
// Created by Mily Mendez on 2/24/24.
//

#include <iostream>


using namespace std;
int main() {
    // variables
    float bill;
    float tax = .0675;
    float tip = .2;
    string name;
    // getting user input
    cout << "Give your name, ";
    cin >> name;
    cout << "Welcome " << name << " to the restaurant bill calculator!" << endl;
    cout << "Type your restaurant bill amount:  ";
    cin >> bill;
    cout << "Your bill amount is:$  " << bill << endl;
    // calculations and displaying results
    float taxwithBill = tax * bill;
    cout << "Your tax amount is:$  " << taxwithBill << endl;
    float tipwithBill = tip * bill;
    cout << "Your tip amount is:$  " << tipwithBill << endl;
    float totalAmount = taxwithBill + tipwithBill + bill;
    cout << "Your total amount with tax and tip included is:$  " << totalAmount << endl;
    cout << "Thank you! Come again!";

}
