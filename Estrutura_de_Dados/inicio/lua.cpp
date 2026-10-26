#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    int jogadores;
    int a,b;
    
    /*a distancia maxima é 100, entao inicializo com 101 para
      conseguir comparar */

    int melhor_pontuacao = 101;

     /*o menor indice é 0, entao inicializo com -1 para
      conseguir comparar com os outros */

    int indice = -1;

    cin >> jogadores;

    /*recebendo as distancias e verificando se elas sao menores que 10.
      Caso sejam, o programa irá ignorar elas e seguir com as demais. */

    for (int i=0; i<jogadores; i++) {
      cin >> a >> b;

      if(a < 10 || b < 10){
        continue;
      }

      //utilizando abs para calcular a diferença entre distancias

      int pontuacao = abs(a-b);

      /*caso a pontuacao atual(a-b) seja menor que a pontuacao inicializada(101),
        a melhor pontuacao passa a ser a pontuacao atual. E o indice é alterado.*/

      if(pontuacao < melhor_pontuacao){
        melhor_pontuacao = pontuacao;
        indice = i;
      }
}
     /*caso o indice não seja alterado o programa entenderá que não houve vencedor*/

      if(indice == -1){
         cout << "sem vencedor" << endl;
      }else{
        cout << indice << endl;
      }
      return 0;
}