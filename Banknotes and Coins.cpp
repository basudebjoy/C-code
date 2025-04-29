#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double value;
    cin >> value;

    int cents = round(value * 100);


    int notes100 = cents / 10000;
    cents %= 10000;

    int notes50 = cents / 5000;
    cents %= 5000;

    int notes20 = cents / 2000;
    cents %= 2000;

    int notes10 = cents / 1000;
    cents %= 1000;

    int notes5 = cents / 500;
    cents %= 500;

    int notes2 = cents / 200;
    cents %= 200;


    int coin1 = cents / 100;
    cents %= 100;

    int coin050 = cents / 50;
    cents %= 50;

    int coin025 = cents / 25;
    cents %= 25;

    int coin010 = cents / 10;
    cents %= 10;

    int coin005 = cents / 5;
    cents %= 5;

    int coin001 = cents;


    cout << "NOTAS:" << endl;
    cout << notes100 << " nota(s) de R$ 100.00" << endl;
    cout << notes50 << " nota(s) de R$ 50.00" << endl;
    cout << notes20 << " nota(s) de R$ 20.00" << endl;
    cout << notes10 << " nota(s) de R$ 10.00" << endl;
    cout << notes5 << " nota(s) de R$ 5.00" << endl;
    cout << notes2 << " nota(s) de R$ 2.00" << endl;

    cout << "MOEDAS:" << endl;
    cout << coin1 << " moeda(s) de R$ 1.00" << endl;
    cout << coin050 << " moeda(s) de R$ 0.50" << endl;
    cout << coin025 << " moeda(s) de R$ 0.25" << endl;
    cout << coin010 << " moeda(s) de R$ 0.10" << endl;
    cout << coin005 << " moeda(s) de R$ 0.05" << endl;
    cout << coin001 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}

