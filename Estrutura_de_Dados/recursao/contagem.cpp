#include <iostream>
#include <string>

using namespace std;

// Retorna o número de ocorrências do caractere 'c' na string 'str' (com 'n' caracteres).
// Algoritmo recursivo sem comandos de repetição.
int contaCaracteres(string str, int n, char c)
{
    
    if (n == 0) {
        return 0;
    }

    return (str[n - 1] == c) + contaCaracteres(str, n - 1, c);
}

int main() 
{
    string str;
    char c;

    getline(cin, str);
    cin >> c;

    cout << contaCaracteres(str, str.length(), c) << endl;

    return 0;
}