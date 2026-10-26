#include <iostream>
using namespace std;

void ordenar(int v[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}

int main() {
    int v[] = {5, 2, 8, 1, 3};
    int n = 5;

    ordenar(v, n);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}