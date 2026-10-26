#include <iostream>
using namespace std;

void preencheArray(int *A, int n){
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
}

void imprimeArray(int *A, int n){
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
}

int main(){
 int n;
 cout << " Tamanho da Array ";
 cin >> n ;

 int *v = new int [n ];

 preencheArray(v, n);
 imprimeArray(v,n);

 delete [] v ;
 v = nullptr ;
}