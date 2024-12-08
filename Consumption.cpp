#include <iostream>
using namespace std;

int main() {
    // Variables for input
    int X;         // Total distance in Km
    double Y;      // Spent fuel in liters

    // Read inputs
    cin >> X >> Y;

    // Calculate average consumption
    double averageConsumption = X / Y;

    // Output the result with 3 decimal places
    cout.precision(3);
    cout << fixed << averageConsumption << " km/l" << endl;

    return 0;
}
