#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size, q;
    vector<int> v;
    
    cin >> size;
    
    for(int i = 0; i < size; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    cin >> q;
    vector<int>::iterator low;
    
    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;
        low = lower_bound(v.begin(), v.end(), x);
        
        if(*low == x || *(low + 1) == x) {
            cout << "Yes " << (low - v.begin() + 1) << endl;
        }else {
            cout << "No " << (low - v.begin() + 1) << endl;
        }
    }
     
    return 0;
}
