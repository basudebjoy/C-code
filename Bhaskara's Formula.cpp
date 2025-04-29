#include <iostream>
using namespace std;


double squareRoot(double number) {
    if (number < 0) return -1;
    double x = number;
    double y = 1;
    double e = 1e-9;
    while (x - y > e) {
        x = (x + y) / 2;
        y = number / x;
    }
    return x;
}

void printDouble5(double value) {

    if (value < 0) {
        cout << "-";
        value = -value;
    }

    long long intPart = (long long)value;
    long long fracPart = (long long)((value - intPart) * 100000 + 0.5);

    cout << intPart << ".";
    if (fracPart < 10000) cout << "0";
    if (fracPart < 1000) cout << "0";
    if (fracPart < 100) cout << "0";
    if (fracPart < 10) cout << "0";
    cout << fracPart;
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    double delta = B * B - 4 * A * C;

    if (A == 0 || delta < 0) {
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double sqrtDelta = squareRoot(delta);
    double R1 = (-B + sqrtDelta) / (2 * A);
    double R2 = (-B - sqrtDelta) / (2 * A);

    cout << "R1 = ";
    printDouble5(R1);
    cout << endl;

    cout << "R2 = ";
    printDouble5(R2);
    cout << endl;

    return 0;
}
