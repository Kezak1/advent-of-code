#include <bits/stdc++.h>
using namespace std;

#define ll long long

int get_num(const string &s, size_t &i) {
    int res = 0;

    while (i < s.size() && isdigit(s[i])) {
        res = res * 10 + (s[i] - '0');
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
    bool flag = true;

    for (size_t i = 0; i < n; i++) {
        if (s[i] == 'd' && i + 3 < n && s.substr(i, 4) == "do()") {
            flag = true;
            i += 3;
        }

        if (s[i] == 'd' && i + 6 < n && s.substr(i, 7) == "don't()") {
            flag = false;
            i += 6; 
        }

        if (flag && s[i] == 'm' && i + 3 < n && s.substr(i, 4) == "mul(") {
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
