#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    Vector vet;
    for(int i=0; i<20; i++){
        vet.push_back(i*2);
    }

    for(int i=0; i<vet.size(); i++){
      cout << vet.at(i) << " ";
    }
    cout << endl;

    cout << "cap: " << vet.capacity() << endl;
}