//
// Created by Mily Mendez on 3/2/24.
//
#include <iostream>

using namespace std;

int main(){
    // welcome message
    cout << "Welcome user, to the word game!" << endl;
    // variables
    string name;
    int age;
    string city;
    string college;
    string profession;
    string animal;
    string pet;
    // getting input
    cout << "What is your name?:  " << endl;
    cin >> name;
    cout << "What is your age:  " << endl;
    cin >> age;
    cout << "What is your city?:  " << endl;
    cin >> city;
    cout << "What is your college?:  " << endl;
    cin >> college;
    cout << "What is your profession?:  " << endl;
    cin >> profession;
    cout << "Type a type of animal:  " << endl;
    cin >> animal;
    cout << "Give a pet name:  " << endl;
    cin >> pet;

    // story
    cout << "There was once a person named " << name
    << " who lived in " << city <<". At the age of " << age << ", "
    << name << " went to the college at " << college << ". " << name <<
    " graduated and went to work as a " << profession << ". Then, " <<
    name << " adopted a(n) " << animal << " named " << pet << ". They both lived happily ever after!"
    << endl;


}