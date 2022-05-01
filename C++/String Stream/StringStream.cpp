#include <sstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> list;
    
    char ch;
    int num;
    while (ss >> num) {
        list.push_back(num);
        ss >> ch;
    }
    
    return list;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
