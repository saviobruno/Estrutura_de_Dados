#include <iostream>
#include <vector>

using namespace std;

int main(){
    //variaveis para o total de figurinhas do album e quanto Baruel tem
    int total, qtd;
    cin >> total >> qtd;

    //vetor para armazenar as figurinhas de Baruel e as repetidas

    vector<int>figurinhas(qtd);
    vector<int>repetidas;

    for(int i=0; i<qtd; i++){
        cin >> figurinhas[i];
    }

    /*Com repetiu em 0 e possivel verificar quando uma figurinha vai se
      repetir ou nao*/
      
    int repetiu = 0;

    /*caso a figurinha atual seja igual a proxima, entao ela sera guardada em 
      repetidas e a variavel repetiu mudara para 1, indicando que uma figurinha 
      repetida foi achada*/

    for(int i = 0; i < qtd - 1; i++) {

        if(figurinhas[i] == figurinhas[i + 1]) {
            
            repetidas.push_back(figurinhas[i]);
            repetiu = 1;
        }
    }

    /*para não ter problema com espaço ao imprimir as repetidas
      usei a variavel limites para tamanho do vetor e enquanto 
      o indice não for maior que limite-1, havera um espaco*/
    
    int limite = repetidas.size();
    for(int i=0; i<limite; i++){
        cout << repetidas[i];

        if(i<limite-1){
            cout << " ";
        }
    }

    cout << endl;

    //caso nao tenha repetidas "N" sera imprimido

    if(repetiu == 0) {
        cout << "N" << endl;
    }

    //variavel pra sinalizar a ausencia de figurinha

    int faltou = 0;

    for(int num = 1; num <= total; num++) {

        //variavel para achar figurinha

        int achou = 0;

        for(int i = 0; i < qtd; i++) {

            /*se a figurinha atual for igual ao indice, entao
              uma figurinha foi achada*/

            if(figurinhas[i] == num) {
                achou = 1;
            }
        }
          /*caso contrario, a variavel zera, a variavel faltou sinaliza
            e a figurinha ausente é imprimida*/
        if(achou == 0) {

            if(faltou == 1) {
                cout << " ";
            }

            cout << num;
            faltou = 1;
        }
    }

    //caso contrario, "N" e imprimido
    if(faltou == 0) {
        cout << "N";
    }

    cout << endl;

    return 0;
    
}