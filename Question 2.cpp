#include <iostream>
using namespace std;

int main() {
    float milesDriven, costPerGallon, milesPerGallon, parkingFees, dailyTolls, dailyDrivingCost;
    cout << "Enter total miles driven: ";
    cin >> milesDriven;
    cout << "Enter your cost per gallon of fuel: ";
    cin >> costPerGallon;
    cout << "Enter your fuel average: ";
    cin >> milesPerGallon;
    cout << "Enter your parking fees per day: ";
    cin >> parkingFees;
    cout << "Enter your daily tolls: ";
    cin >> dailyTolls;
    dailyDrivingCost = ((milesDriven / milesPerGallon) * costPerGallon) + parkingFees + dailyTolls;

    cout << "\nDaily Driving Cost: $" << dailyDrivingCost << endl;

    return 0;
}