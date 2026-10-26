#include <iostream>
#include <vector>
using namespace std;

bool palindromo(string palavra, int ini, int fim){
    if(ini>=fim){
        return true;
    }else{
        return (palavra[ini]==palavra[fim]) && palindromo(palavra , ini +1 , fim -1);
    }
}

int main(){
    string str;
    int inicio, final;
    cin >> str >> inicio >> final;
    cout << palindromo(str,inicio, final) << endl;
}
