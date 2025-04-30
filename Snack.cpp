#include <iostream>

using namespace std;

int main() {
    int code, quantity;
    double price;

    cin >> code >> quantity;


    if (code == 1)
        price = 4.00;
    else if (code == 2)
        price = 4.50;
    else if (code == 3)
        price = 5.00;
    else if (code == 4)
        price = 2.00;
    else if (code == 5)
        price = 1.50;
    else {
        cout << "Invalid product code." << endl;
        return 1;
    }

    double total = price * quantity;


    int reais = (int)total;
    int centavos = (int)((total - reais) * 100 + 0.5);

    cout << "Total: R$ " << reais << ".";
    if (centavos < 10) cout << "0";
    cout << centavos << endl;

    return 0;
}

