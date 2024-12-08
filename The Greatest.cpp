#include <iostream>
#include <cstdlib> // Include to use abs function
using namespace std;

// Function to find the maximum of two numbers
int findMax(int x, int y) {
    return (x + y + abs(x - y)) / 2;
}

int main() {
    // Variables for input
    int a, b, c;

    // Read inputs
    cin >> a >> b >> c;

    // Find the greatest value using the formula
    int greatest = findMax(findMax(a, b), c);

    // Output the result
    cout << greatest << " eh o maior" << endl;

    return 0;
}
