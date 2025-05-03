#include <iostream>

using namespace std;

int main() {
    double salary, newSalary, increase;
    int percentage;

    cin >> salary;

    // Determine percentage based on salary range
    if (salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    // Calculate increase and new salary
    increase = salary * percentage / 100.0;
    newSalary = salary + increase;

    // Output with two decimal places
    cout << "Novo salario: " << (int)(newSalary * 100) / 100.0 << endl;
    cout << "Reajuste ganho: " << (int)(increase * 100) / 100.0 << endl;
    cout << "Em percentual: " << percentage << " %" << endl;

    return 0;
}
