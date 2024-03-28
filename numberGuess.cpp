//
// Created by Mily Mendez on 3/26/24.
//
#include <iostream>
// library needed for the random function
#include <cstdlib>
using namespace std;
// I decided to make it 1 to 20 to keep it simple!

int main() {
    // variables and functions
    srand(time(0));
    int randomNumber = rand() % 20 + 1;
    int userInput;
    int guesses = 0;
// gets user input
    cout << "Hello user to the number guessing game! Enter a number until you're correct!" << endl;
    cout << "Input a number!: " << endl;
    cin >> userInput;


// loop that checks if input is high or low and input validation into the mix
    while(userInput != randomNumber) {
        while (userInput < 1 || userInput > 20) {
            cout << "Please enter a valid number between 1 and 20: " << endl;
            cin >> userInput;
        }

        if (userInput > randomNumber) {
            guesses ++;
            cout << "Your guess is too high! Try again...: " << endl;
            cin >> userInput;
        } else {
            guesses ++;
            cout << "Your guess is too low! Try again...: " << endl;
            cin >> userInput;
        }

        }
    // if number is equal, displays result and guesses
    guesses++;
    cout << "Congrats! It's the same number!" << endl;
    cout << "Number of guesses: " << guesses << endl;
}





