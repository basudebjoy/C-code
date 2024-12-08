#include <iostream>
using namespace std;

int main() {
    // Define the value of π
    const double PI = 3.14159;

    // Variable for the radius
    double R;

    // Read the radius from input
    cin >> R;

    // Calculate the area
    double area = PI * R * R;

    // Output the result with 4 decimal places
    cout.precision(4);
    cout << fixed << "A=" << area << endl;

    return 0;
}
