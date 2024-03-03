//
// Created by Mily Mendez on 3/2/24.
//

#include <iostream>

using namespace std;

int main() {
    cout << "Welcome user to the stadium seating program. This program will ask about how many tickets of each class were sold. "<< endl;
    // ticket variables declared
    int ticketA;
    int ticketB;
    int ticketC;
    int classA = 15;
    int classB = 12;
    int classC = 9;
    // displaying ticket prices
    cout << "Class A tickets are $" << classA << ", Class B tickets are $" << classB << ", and Class C tickets are $" << classC << endl;
    // asking for user input and displaying ticket amount
    cout << "Class A tickets sold:  ";
    cin >> ticketA;
    cout << "Sold: " << ticketA << endl;
    cout << "Class B tickets sold:  ";
    cin >> ticketB;
    cout << "Sold: " << ticketB << endl;
    cout << "Class C tickets sold:  ";
    cin >> ticketC;
    cout << "Sold: " << ticketC << endl;
    // calculations
    int incomeA = ticketA * classA;
    int incomeB = ticketB * classB;
    int incomeC = ticketC * classC;
    int incomeAll = incomeA + incomeB + incomeC;
    // displaying incomes
    cout << "Income from Class A tickets: $" << incomeA << endl;
    cout << "Income from Class B tickets: $" << incomeB << endl;
    cout << "Income from Class C tickets: $" << incomeC << endl;
    cout << "Income from all tickets: $" << incomeAll << endl;
    cout << "Thank you for using my program!" << endl;
}