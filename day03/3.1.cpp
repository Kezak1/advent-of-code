#include <bits/stdc++.h>
using namespace std;

#define ll long long

int get_num(const string &s, size_t &i) {
    ll res = 0;
    
    while (i < s.size() && isdigit(s[i])) {
        res *= 10 + (s[i] - '0');
        i++;
    }

    return res;
}

int main() {
    freopen("input.txt", "r", stdin);

    ll result = 0;
    string s;
    char c;

    while (scanf("%c", &c) != EOF) {
        s += c;
    }

    ll n = s.size();

    for (size_t i = 0; i < n; i++) {
        if (s[i] == 'm' && i + 3 < n && s.substr(i, 4) == "mul(") {
            i += 4;
            int x = get_num(s, i);
            if (i < n && s[i] == ',') {
                i++; 
                int y = get_num(s, i);
                if (i < n && s[i] == ')') {
                    result += x * y; 
                }
            }
        }
    }

    cout << result;
    return 0;
}
