#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    set<int> s;
    cin >> q;
     
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            s.insert(b);
        }else if (a == 2) {
            s.erase(b);
        }else {
            set<int>::iterator itr = s.find(b);
            if(itr == s.end()) {
                cout << "No" << endl;
            }else {
               cout << "Yes" << endl;
            }
        }
    }
      
    return 0;
}
