#include <iostream>

//funcao para posicao da cobra
struct Pos {
    int x, y;
};

void atualizar_cobra(struct Pos cobra[], int size, char direcao) {
    //atualiza os gomos do rastro de trás para frente
    for (int i = size - 1; i > 0; i--) {
        cobra[i] = cobra[i - 1];
    }

    //atualiza a posição
    if (direcao == 'L') {
        cobra[0].x -= 1;
    } else if (direcao == 'R') {
        cobra[0].x += 1;
    } else if (direcao == 'U') {
        cobra[0].y -= 1;
    } else if (direcao == 'D') {
        cobra[0].y += 1;
    }
}