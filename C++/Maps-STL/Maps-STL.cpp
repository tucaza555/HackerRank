#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string, int> m;
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        string a;
        int b, q;
        
        cin >> q;
        
        if(q == 1) {
            cin >> a >> b;
            
            if(m.find(a)==m.end()) {
                m.insert(make_pair(a,b));
            }
            else {
                m[a] += b;
            }
        }else if(q == 2) {
            cin >> a;
            
            m.erase(a);
        }else {
            cin >> a;
            
            m.find(a)!=m.end()?cout<<m.find(a)->second<<endl:cout<<"0"<<endl;
        }
    }
    
    return 0;
}
