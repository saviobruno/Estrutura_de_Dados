#include <iostream>
#include <vector>

using namespace std;

int main(){
    //variaveis para o total de figurinhas do album e quanto Baruel tem
    int total, qtd;
    cin >> total >> qtd;

    //vetor para armazenar as figurinhas de Baruel

    vector<int>figurinhas(qtd);
    vector<int>repetidas;

    for(int i=0; i<qtd; i++){
        cin >> figurinhas[i];
    }

    /*Com repetiu em 0 e possivel verificar quando uma figurinha vai se
      repetir ou nao*/
      
    int repetiu = 0;

    /*caso a figurinha atual seja igual a proxima, entao ela sera iprimida
      na tela e a variavel repetiu mudara para 1, indicando que uma figurinha 
      repetida foi achada*/

    for(int i = 0; i < qtd - 1; i++) {

        if(figurinhas[i] == figurinhas[i + 1]) {
            
            repetidas.push_back(figurinhas[i]);
            repetiu = 1;
        }
    }
    
    int limite = repetidas.size();
    for(int i=0; i<limite; i++){
        cout << repetidas[i];
        if(i<limite-1){
            cout << " ";
        }
    }
    
    cout << endl;

    // mas caso repetiu nao mude de valor, entao N sera imprimido

    if(repetiu == 0) {
        cout << "N" << endl;
    }



    int faltou = 0;

    /*para saber quais figurinhas faltam no album começamos com um for
      que percorrera o album. A variavel achou sinalizara quando nos
      tivermos a figurinha. Se a figurinha atual for igual ao indice
      num, entao achou se torna 1, indicando que ja temos a figurinha.*/

    
    for(int num = 1; num <= total; num++) {

        int achou = 0;

        for(int i = 0; i < qtd; i++) {

            if(figurinhas[i] == num) {
                achou = 1;
            }
        }

        /*caso ela continue zerada significa que não temos a figurinha.
          Entao, ela sera imprimida na tela e a variavel faltou recbera
          1, indicando a ausencia de figurinhas.*/

        if(achou == 0) {
            cout << num;
            faltou = 1;
        }
    }
    /*se faltou estiver em 0, significa que temos todas as figurinhas.
      Imprimira somente N.*/

    if(faltou == 0) {
        cout << "N" << endl;
    }

    return 0;
    
}