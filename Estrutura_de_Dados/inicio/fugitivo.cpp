#include <iostream>

using namespace std;

int main() {
    //variaveis das posicoes
    int H, P, F, D;
    cin >> H >> P >> F >> D;
    
    //posicao atual do fugitivo recebe a posicao inicial dele
    int pos = F;

    /*enquanto a posicao atual for diferente da do helicoptero e do policial,
      o programa movera uma posicao pra frente (+1) ou para tras (-1). Para
      evitar numeros negativos soma-se 16 ao D garantindo que garantindo que 
      a conta não dê negativa ao andar para trás. O % 16 serve para manter a 
      posição sempre dentro do limite estabelecido*/

    while (pos != H && pos != P) {
        pos = (pos + D + 16) % 16;
    }

    /*caso a posicao seja igual a do helicoptero, o "S sera imprimido.
      Se não, o "N sera"*/

    if (pos == H) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}