#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    string s;
    int q;
    cin >> q; 
    
    for(int i = 0; i < q; i++) {
        cin >> s;
        
        int n = s.length();
        char arr[n + 1];
        
        strcpy(arr, s.c_str());
        
        for(int i = 0; i < n; i = i + 2) {
            cout << arr[i];
        }
        
        cout << " ";
        
        for(int i = 1; i < n; i = i + 2) {
            cout << arr[i];
        }
        
        cout << endl;
    }
    
}
