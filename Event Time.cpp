#include <iostream>
using namespace std;

int main() {
    int start_day, end_day;
    int sh, sm, ss; // start hour, min, sec
    int eh, em, es; // end hour, min, sec

    string dummy;
    // Read start day
    cin >> dummy >> start_day;
    // Read start time
    cin >> sh; // hour
    cin.ignore(3); // ignore " : "
    cin >> sm;
    cin.ignore(3);
    cin >> ss;
    // Read end day
    cin >> dummy >> end_day;
    // Read end time
    cin >> eh;
    cin.ignore(3);
    cin >> em;
    cin.ignore(3);
    cin >> es;

    // Convert start and end times into total seconds from day 0
    int start_total = ((start_day * 24 + sh) * 60 + sm) * 60 + ss;
    int end_total = ((end_day * 24 + eh) * 60 + em) * 60 + es;

    int diff = end_total - start_total;

    int days = diff / (24 * 3600);
    diff %= 24 * 3600;

    int hours = diff / 3600;
    diff %= 3600;

    int minutes = diff / 60;
    diff %= 60;

    int seconds = diff;

    cout << days << " dia(s)" << endl;
    cout << hours << " hora(s)" << endl;
    cout << minutes << " minuto(s)" << endl;
    cout << seconds << " segundo(s)" << endl;

    return 0;
}
