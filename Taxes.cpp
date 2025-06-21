#include <iostream>
#include <sstream>
using namespace std;

string formatDouble(double value) {
    stringstream ss;
    ss.setf(ios::fixed);
    ss.precision(2);
    ss << value;
    return ss.str();
}

int main() {
    double salary, tax = 0.0;
    cin >> salary;

    if (salary <= 2000.00) {
        cout << "Isento" << endl;
    } else {
        if (salary > 2000.00) {
            double taxable = min(salary, 3000.00) - 2000.00;
            tax += taxable * 0.08;
        }
        if (salary > 3000.00) {
            double taxable = min(salary, 4500.00) - 3000.00;
            tax += taxable * 0.18;
        }
        if (salary > 4500.00) {
            double taxable = salary - 4500.00;
            tax += taxable * 0.28;
        }

        cout << "R$ " << formatDouble(tax) << endl;
    }

    return 0;
}
