#include <iostream>

int subida(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    return subida(n-1) + subida(n-3);
}

using namespace std;

int main(){
    int n;
    cin >> n;
    
    cout << subida(n) << endl;
}