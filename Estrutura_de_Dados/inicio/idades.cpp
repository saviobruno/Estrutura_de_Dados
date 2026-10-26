#include <iostream>
using namespace std;

int main(){

    // inicializando idade em 0 e recebendo nome do usuario
    int idade = 0;
    string nome;

    cin >> idade >> nome;

    /*caso a idade obedeça a condicao, sera imprimido na tela
      o que esta escrito */

    if(idade < 12) {
        cout << nome << "\n" << "eh crianca" << endl;
    }  
    else if(idade < 18) {
        cout << nome << "\n" << "eh jovem" << endl;
    }  
    else if(idade < 65) {
        cout << nome << "\n" << "eh adulto" << endl;
    }  
    else if(idade < 1000) {
        cout << nome << "\n" << "eh idoso" << endl;
    }
    else{
        cout << nome << "\n" << "e mumia" << endl;
    }

    return 0;

}