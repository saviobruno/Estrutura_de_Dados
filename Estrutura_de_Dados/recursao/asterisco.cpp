#include <iostream>
using namespace std;

 void asterisco(int n){
   if(n>0){
    cout << "*" << endl;
    asterisco(n-1);
   }
}
int main(){
    int num;
    cin >> num;
    asterisco(num);
}
