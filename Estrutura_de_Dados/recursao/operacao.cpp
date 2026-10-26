#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void print(const vector<int>& v, int i, int step) {
    if (i < 0 || i >= (int)v.size()){
        return;
    }
    cout << v[i] << " ";
    print(v, i + step, step);
}

int sum(const vector<int>& v, int i = 0) {
    if (i == (int)v.size()) {
        return 0;
    }
    return v[i] + sum(v, i + 1);
}

int mult(const vector<int>& v, int i = 0) {
    if (i == (int)v.size()){
        return 1;
    }
    return v[i] * mult(v, i + 1);
}

int min_elem(const vector<int>& v, int i = 0) {
    if (i == (int)v.size() - 1){
        return v[i];
    }
    return min(v[i], min_elem(v, i + 1));
}

void inv(vector<int>& v, int i = 0) {
    int j = v.size() - 1 - i;
    if (i >= j){

        return;
    }

    swap(v[i], v[j]);
    inv(v, i + 1);
}

int main() {
    string line;

    if (!getline(cin, line)){
        return 0;
    }

    stringstream ss(line);
    vector<int> v;
    int value;
    while (ss >> value) v.push_back(value);

    cout << "vet : [ "; print(v, 0, 1); cout << "]\n";
    cout << "rvet: [ "; print(v, v.size() - 1, -1); cout << "]\n";

    cout << "sum : " << sum(v) << "\n";
    cout << "mult: " << mult(v) << "\n";
    cout << "min : " << min_elem(v) << "\n";

    inv(v);
    cout << "inv : [ "; print(v, 0, 1); cout << "]\n";

    return 0;
}