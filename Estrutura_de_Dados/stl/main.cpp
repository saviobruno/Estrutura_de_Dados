#include <iostream>
#include <vector>
using namespace std;

void removeTodos(vector<int>& v, int x){
    for(auto it = v.begin(); it!=v.end(); it++){
        if(*it == x){
           v.erase(it);
       }
  }
}

void imprimeVetor(vector<int>& v){
  for(auto it = v.begin(); it!=v.end(); it++){
     cout << *it << " ";
  }
  cout << endl;
}

int main(){
   vector<int> vet{1,23,3,5,3,7};
   int x = 3;
   removeTodos(vet, x);
   imprimeVetor(vet);
}