#include <iostream>
#include <vector>

using namespace std;
int main(){
    //inicializando contadores de pares e solteiros em 0
    int pares=0;
    int solteiros=0;
    int n;
    int animal;

    /*criando um vetor para os animais sem par e atribuindo n
      como seu tamanho*/

    cin >> n;
    vector<int>descasados(n);

    /*um primeiro loop para receber os animais e uma variavel
      para verificar os casais encontrados. Inicialmente,
      ela comeca em 0 ja que nao tem casais*/

    for(int i=0; i<n; i++){
        cin >> animal;
        int casal = 0;

    /*um segundo loop para verificar se há pares existentes no
      vetor dos descasados. Caso tenha, o contador dos pares vai
      aumentar 1, a posicao em que o animal estava no vetor sera
      zerada e a variavel casal mudara para 1, indicando um casal
      econtrado. O break garante que o programa parara de executar.*/

        for(int j=0; j<solteiros; j++){
            if(descasados[j] == -animal){
              pares++;
              descasados[j] == 0;
              casal = 1;
              break;  
            }
        }

        /*caso algum animal fiquem sem par ele sera guardado na 
          posicao atual do vetor descasados e o contador aumentara 1*/
          
        if(casal == 0){
            descasados[solteiros] = animal;
            solteiros++;
        }
    }

    cout << pares << endl;

    return 0;
    
}