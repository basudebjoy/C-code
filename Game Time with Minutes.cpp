#include <iostream>

using namespace std;

int main() {
    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    int startTotal = startHour * 60 + startMinute;
    int endTotal = endHour * 60 + endMinute;

    int durationMinutes;

    if (startTotal == endTotal) {

        durationMinutes = 24 * 60;
    } else if (startTotal < endTotal) {
        durationMinutes = endTotal - startTotal;
    } else {

        durationMinutes = (24 * 60 - startTotal) + endTotal;
    }

    int durationHour = durationMinutes / 60;
    int durationMinute = durationMinutes % 60;

    cout << "O JOGO DUROU " << durationHour << " HORA(S) E "
         << durationMinute << " MINUTO(S)" << endl;

    return 0;
}
