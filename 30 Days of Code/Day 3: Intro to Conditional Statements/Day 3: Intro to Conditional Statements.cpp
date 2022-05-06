#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string N_temp;
    getline(cin, N_temp);
    
    if(stoi(N_temp)%2 != 0) {
        cout << "Weird" << endl;
    }else if (stoi(N_temp)%2 == 0 && stoi(N_temp) >= 2 && stoi(N_temp) <= 5){
        cout << "Not Weird" << endl;
    }else if(stoi(N_temp)%2 == 0 && stoi(N_temp) >= 6 && stoi(N_temp) <= 20) {
        cout << "Weird" << endl;
    }else if(stoi(N_temp)%2 == 0 && stoi(N_temp) > 20) {
        cout << "Not Weird" << endl;
    }

    int N = stoi(ltrim(rtrim(N_temp)));

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
