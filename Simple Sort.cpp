#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    int original1 = a, original2 = b, original3 = c;

    int x = a, y = b, z = c;


    if (x > y) {
        int temp = x; x = y; y = temp;
    }
    if (x > z) {
        int temp = x; x = z; z = temp;
    }
    if (y > z) {
        int temp = y; y = z; z = temp;
    }


    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    cout << endl;


    cout << original1 << endl;
    cout << original2 << endl;
    cout << original3 << endl;

    return 0;
}

