//
// Created by Mily Mendez on 4/7/24.
//
#include <iostream>


using namespace std;

int main() {
    // variables and arrays
    int totalRainfall = 0;
    int z;
    float rainNum;
    string months[12] = {"January", "February", "March", "April"
    , "May", "June", "July", "August", "September", "October", "November", "December"};
    float rain[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // first for loop that gets input from user
    for(z = 0; z < 12;z++) {
        cout << "Rain for the month of " << months[z] << ":" << endl;
        cin >> rain[z];
        totalRainfall+=rain[z];
    }
    // variables for second loop
    int maxIndex = 0;
    int minIndex = 0;
    // for loop that finds smallest and biggest element in rain array, returns index of the said element
    for(int i = 1; i < 12; i++) {
        if (rain[i] > rain[maxIndex]) {
            maxIndex = i;
        }
        if (rain[i] < rain[minIndex]) {
            minIndex = i;
        }
    }
    // displays results
    cout << "Total rainfall for the year: " << totalRainfall << endl;
    cout << "Average monthly rainfall: " << (totalRainfall/12) << endl;
    cout << "Month with highest rainfall: " << months[maxIndex] << " (" << rain[maxIndex] << ")" << endl;
    cout << "Month with lowest rainfall: " << months[minIndex] << " (" << rain[minIndex] << ")" << endl;

}
