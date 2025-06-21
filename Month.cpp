#include <iostream>
using namespace std;

int main() {
    int month;
    cin >> month;

    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (month >= 1 && month <= 12) {
        cout << months[month - 1] << endl;
    }

    return 0;
}
