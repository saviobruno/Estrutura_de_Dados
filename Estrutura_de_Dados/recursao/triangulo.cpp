#include <iostream>
#include <vector>

using namespace std;

void trianguloDeSomas(vector<int> v) {
    
    if (v.empty()){
        return;
    }

    
    if (v.size() > 1) {
        vector<int> proximo;
        for (size_t i = 0; i < v.size() - 1; i++) {
            proximo.push_back(v[i] + v[i + 1]);
        }
        
        trianguloDeSomas(proximo);
    }

    cout << "[";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << (i == v.size() - 1 ? "" : ", ");
    }
    cout << "]\n";
}

int main() {
    int n;

    if (!(cin >> n) || n <= 0){
        return 0;
    }

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    trianguloDeSomas(v);

    return 0;
}