#include <iostream>
using namespace std;

int main() {
    int X, Y, sum = 0;
    cin >> X >> Y;

    if (X > Y) {
        swap(X, Y);
    }

    for (int i = X + 1; i < Y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}

