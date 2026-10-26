#include <iostream>
using namespace std;

void hanoi(int n, char origem, char fim, char aux1, char aux2) {
    if (n == 1) {
        cout << "Mover disco 1 de " << origem
             << " para " << fim << endl;
        return;
    }

    if (n == 2) {
        cout << "Mover disco 1 de " << origem
             << " para " << aux1 << endl;

        cout << "Mover disco 2 de " << origem
             << " para " << fim << endl;

        cout << "Mover disco 1 de " << aux1
             << " para " << fim << endl;

        return;
    }

    hanoi(n - 2, origem, aux1, fim, aux2);

    cout << "Mover disco " << n - 1 << " de "
         << origem << " para " << aux2 << endl;

    cout << "Mover disco " << n << " de "
         << origem << " para " << fim << endl;

    cout << "Mover disco " << n - 1 << " de "
         << aux2 << " para " << fim << endl;

    hanoi(n - 2, aux1, fim, origem, aux2);
}

int main() {
    int n;

    cin >> n;

    hanoi(n, 'A', 'D', 'B', 'C');

    return 0;
}