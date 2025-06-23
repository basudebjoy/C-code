#include <iostream>
using namespace std;

int main() {
    int N, X;
    int inCount = 0, outCount = 0;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        if (X >= 10 && X <= 20) {
            inCount++;
        } else {
            outCount++;
        }
    }

    cout << inCount << " in" << endl;
    cout << outCount << " out" << endl;

    return 0;
}

