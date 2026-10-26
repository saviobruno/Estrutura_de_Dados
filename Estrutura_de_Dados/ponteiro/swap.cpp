#include <iostream>
using namespace std;

void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;

    cout << "*p1: " << *p1 << "*p2: " << *p2 << endl;
}

int main(){
    int a = 10;
    int b = 5;

    int *p1 = &a;
    int *p2 = &b;

    troca(p1,p2);
}