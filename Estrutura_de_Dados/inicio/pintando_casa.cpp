#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    //declaracao das variaveis
    double a, b, c;
    double p;
    cin >> a >> b >> c;

    //calculo de p

    p = (a+b+c)/2;

    //calculo da area utilizando raiz quadrada

    double area = sqrt(p*(p-a)*(p-b)*(p-c));

    //imprimindo resultado com precisao de 2 casas decimais

    cout << fixed << setprecision(2) << area << "\n";

    return 0;


}