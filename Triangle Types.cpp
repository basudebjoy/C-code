#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // Manually sort the sides in descending order
    double A = a, B = b, C = c;

    // Sort A, B, C such that A is the largest
    if (B > A && B > C) {
        swap(A, B);
    } else if (C > A && C > B) {
        swap(A, C);
    }

    if (B < C) {
        swap(B, C);
    }

    // Check for triangle existence
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        double A2 = A * A, B2 = B * B, C2 = C * C;

        // Triangle type by angles
        if (A2 == B2 + C2)
            cout << "TRIANGULO RETANGULO" << endl;
        else if (A2 > B2 + C2)
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else
            cout << "TRIANGULO ACUTANGULO" << endl;

        // Triangle type by sides
        if (A == B && B == C)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if (A == B || B == C || A == C)
            cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}

