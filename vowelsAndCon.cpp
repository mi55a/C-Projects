//
// Created by Mily Mendez on 4/22/24.
//
// Starter code for Vowels and Consonants assignment

#include <iostream>
#include <cctype>
using namespace std;

// Determines whether parameter is a vowel
bool isVowel(char c)
{
    c = toupper(c);
    return (c == 'A' || c == 'E' || c == 'I'
            || c == 'O' || c == 'U');
}

// Count vowels in string
int countVowels(char* str)
{
    // TODO:  Count the vowels and return the result.
    int vowels = 0;
    while ((*str !='\0')) {
        if(isVowel((*str))) {
            vowels++;
        }
        str++;
    }


    return vowels;
}

// Count consonants in string
int countConsonants(char* str)
{
    // TODO:  Count the consonants and return the result.
    int consonants = 0;
    while ((*str !='\0')) {
        if(!isVowel((*str)) && isalpha(*str)) {
            consonants++;
        }
        str++;
    }
    return consonants;
}

// JUST FOR DEMO PURPOSE:
int countSpaces(char* str)
{
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (isspace(str[i]))
            count++;

    return count;
}

int main()
{
    const int SIZE = 200;
    char sentence[SIZE];

    cout << "Enter a sentence:  ";
    cin.getline(sentence, SIZE);

    // THIS IS JUST AN EXAMPLE:
    int spaces = countSpaces(sentence);
    cout << "That sentence contains " << spaces
         << " spaces." << endl;
    // OK, EXAMPLE'S OVER.

    char choice = 'A';
    while (toupper(choice) != 'D')
    {
        cout << "\nYour sentence:  " << sentence << endl << endl;

        cout << "A) Count the number of vowels in the string" << endl;
        cout << "B) Count the number of consonants in the string" << endl;
        cout << "C) Enter another string" << endl;
        cout << "D) Exit the program" << endl;
        cin >> choice;

        switch (toupper(choice))
        {
            case 'A':  cout << "There are " << countVowels(sentence) << " vowels." << endl;
                break;
            case 'B':  cout << "There are " << countConsonants(sentence) << " consonants." << endl;
                break;
            case 'C':
                cin.ignore();
                cout << "Enter a sentence:  ";
                cin.getline(sentence, SIZE);
                break;
            case 'D': break;
            default: // Optional error message
                break;
        }
    }
}