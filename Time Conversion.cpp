#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;

    int hours = M / 3600;
    int minutes = (M % 3600) / 60;
    int seconds = M % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

    return 0;
}
