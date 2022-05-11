#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    map<string, int> m;
    
    int q; string a; long b;
    
    cin >> q;
    cin.ignore();
    
    while(q--) {
        
        cin >> a >> b;
        
        m[a] = b;
    }
    
    while(cin >> a) { 
        if (m.find(a) != m.end()) {
            cout << m.find(a)->first << "=" << m.find(a)->second << endl;
        } else {
            cout << "Not Found" << endl;
        }
    }
    
    
    return 0;
}
