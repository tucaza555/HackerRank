#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;
    int size, newSize, x, a, b;
    
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
     
    cin >> x;
     
    cin >> a >> b;
    
    v.erase(v.begin() + (x - 1));
    v.erase(v.begin() + (a - 1), v.begin() + (b - 1));
    
    newSize = v.size();
    
    cout << newSize << endl;
    
    for(int i = 0; i < newSize; i++) {
        cout << v[i] << " ";
    }
     
    return 0;
}
