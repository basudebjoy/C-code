#include <iostream>
#include <cmath> // For sqrt and pow
using namespace std;

int main() {
    // Variables for the coordinates
    double x1, y1, x2, y2;

    // Read inputs for the first point and the second point
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    // Calculate the distance using the formula
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the result with 4 decimal places
    cout.precision(4);
    cout << fixed << distance << endl;

    return 0;
}
