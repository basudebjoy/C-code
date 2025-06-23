
#include <iostream>
using namespace std;

int main() {
    int num, evenCount = 0;

    // Read 5 integer values
    for (int i = 0; i < 5; i++) {
        cin >> num;
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    // Print the result in lowercase format
    cout << evenCount << " valores pares" << endl;

    return 0;
}
