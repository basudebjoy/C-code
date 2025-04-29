#include <iostream>
using namespace std;

int main() {
    int total_days;
    cin >> total_days;

    int years = total_days / 365;
    int remaining_days = total_days % 365;

    int months = remaining_days / 30;
    int days = remaining_days % 30;


    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}
