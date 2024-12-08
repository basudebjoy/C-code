#include <iostream>
#include <cstdio> // For printf
using namespace std;

int main() {
    // Variables for input
    double A, B, C;

    // Read inputs
    cin >> A >> B >> C;

    // Constants
    const double PI = 3.14159;

    // Calculations
    double areaTriangle = (A * C) / 2.0;
    double areaCircle = PI * C * C;
    double areaTrapezium = ((A + B) * C) / 2.0;
    double areaSquare = B * B;
    double areaRectangle = A * B;

    // Output results
    printf("TRIANGULO: %.3f\n", areaTriangle);
    printf("CIRCULO: %.3f\n", areaCircle);
    printf("TRAPEZIO: %.3f\n", areaTrapezium);
    printf("QUADRADO: %.3f\n", areaSquare);
    printf("RETANGULO: %.3f\n", areaRectangle);

    return 0;
}
