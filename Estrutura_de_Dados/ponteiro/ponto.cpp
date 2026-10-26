#include <iostream>
using namespace std;

struct Ponto{
    float x;
    float y;
};

void troca(Ponto *p1, Ponto *p2){
    int aux_x, aux_y;
    aux_x = p1->x;
    aux_y = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = aux_x;
    p2->y = aux_y;

}

int main(){
    Ponto ponto1;
    Ponto ponto2;

    ponto1.x=1;
    ponto1.y=2;
}