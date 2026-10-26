#include <iostream>
using namespace std;

int soma(int n){
    return n*(n+1)/2; //primeira forma sem recursividade
}
int soma2(int n){
    if(n==1){
        return 1;
    }else{   //segunda forma com recursividade
        return n+soma(n-1);
    }
}
int main(){
    int num;
    cin >> num;
    cout << soma(num) << endl;
    cout << soma2(num) << endl;
}