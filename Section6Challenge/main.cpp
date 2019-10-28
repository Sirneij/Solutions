#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
    cout << "Hello, Welcome to John's cleaning service." << endl;
    const double pricePerSmallRoom {25};
    const double pricePerBigRoom {35};
    const double taxRate {0.06};
    const int expiryDate {30}; //Number of days.

    cout << "\nEnter the number of small rooms you would like cleaned: ";
    int numberOfSmallRooms {0};
    cin >> numberOfSmallRooms;

    cout << "Enter the number of big rooms you would like cleaned: ";
    int numberOfBigRooms {0};
    cin >> numberOfBigRooms;

    cout << "Price per small room: $" << pricePerSmallRoom << endl;
    cout << "Price per big room: $" << pricePerBigRoom << endl;

    double costForSmallRoom = numberOfSmallRooms * pricePerSmallRoom;
    double costForBigRoom = numberOfBigRooms * pricePerBigRoom;
    double totalCost = costForBigRoom + costForSmallRoom;
    double totalTax = totalCost * taxRate;

    cout << "Cost: $" << totalCost << endl;
    cout << "Tax: $" << totalTax << endl;

    cout << "===============================================" << endl;

    double totalEstimate = totalCost + totalTax;
    cout << "Total estimate: $" << totalEstimate << endl;
    cout << "This estimate is valid for " << expiryDate << " days" << endl;

    return 0;
}
