//
// Created by Mily Mendez on 4/27/24.
//
// STARTER CODE for struct assignment
// Michael Henson

// Preprocessor Directives
#include <iostream>
#include <string>
using namespace std;
// starter code by my professor, rest by me :)

// TODO: Create a struct for division's sales data.
struct corporateSales {
    string name;
    float firstQSales;
    float secondQSales;
    float thirdQSales;
    float fourthQSales;
    float totalSales;
    float avgSales;
};
// prototype for function
float calculateTotal(const corporateSales &sales);
// calculates total
float calculateTotal(corporateSales &sales) {
    float sum = sales.firstQSales + sales.secondQSales + sales.thirdQSales + sales.fourthQSales;
    return sum;
    return 0;
}
// get input from user, each having an input validation loop
void getSales(corporateSales& sales) {

    cout << "First quarter sales: " << endl;
    cin >> sales.firstQSales;
    while (0 > sales.firstQSales) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin >> sales.firstQSales;
    }
    cout << "Second quarter sales: " << endl;
    cin >> sales.secondQSales;
    while (0 > sales.secondQSales) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin >> sales.secondQSales;
    }
    cout << "Third quarter sales: " << endl;
    cin >> sales.thirdQSales;
    while (0 > sales.thirdQSales) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin >> sales.thirdQSales;
    }
    cout << "Fourth quarter sales: " << endl;
    cin >> sales.fourthQSales;
    while (0 > sales.fourthQSales) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin >> sales.fourthQSales;
    }
}
int main() {
    // TODO: Create struct variables for North, South, East, and West Divisions
    corporateSales northDivision;
    northDivision.name = "North Division";
    corporateSales southDivision;
    southDivision.name = "South Division";
    corporateSales westDivision;
    westDivision.name = "West Division";
    corporateSales eastDivision;
    eastDivision.name = "East Division";

    // TODO: Fill in quarterly sales figures for each division.
    cout << "Sales for North Division" << endl;
    getSales(northDivision);
    cout << "Sales for South Division" << endl;
    getSales(southDivision);
    cout << "Sales for West Division" << endl;
    getSales(westDivision);
    cout << "Sales for East Division" << endl;
    getSales(eastDivision);

    // TODO: Calculate total sales for each division.
    northDivision.totalSales = calculateTotal(northDivision);
    southDivision.totalSales = calculateTotal(southDivision);
    westDivision.totalSales = calculateTotal(westDivision);
    eastDivision.totalSales = calculateTotal(eastDivision);

    // TODO: Calculate average quarterly sales for each division.
    northDivision.avgSales = northDivision.totalSales / 4.0;
    southDivision.avgSales = southDivision.totalSales / 4.0;
    westDivision.avgSales = westDivision.totalSales / 4.0;
    eastDivision.avgSales = eastDivision.totalSales / 4.0;

    // TODO: Print report of all sales data from all four divisions.
    cout << "Sales Report:" << endl;
    cout << "-------------------------" << endl;
    cout << "Division\tTotal Sales\tAverage Sales" << endl;
    cout << "-------------------------" << endl;
    cout << northDivision.name << "\t\t" << northDivision.totalSales << "\t\t" << northDivision.avgSales << endl;
    cout << southDivision.name << "\t\t" << southDivision.totalSales << "\t\t" << southDivision.avgSales << endl;
    cout << westDivision.name << "\t\t" << westDivision.totalSales << "\t\t" << westDivision.avgSales << endl;
    cout << eastDivision.name << "\t\t" << eastDivision.totalSales << "\t\t" << eastDivision.avgSales << endl;


}