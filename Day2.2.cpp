#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000
#define ll long long

//decreasing
bool ok1(vector<int> data, int n) {
    if(n == 0 || n == 1) {
        return true;
    }

    for(int i = 1; i < n; i++) {
        int tmp = data[i - 1] - data[i];
        if(!(tmp <= 3 && tmp > 0)) {
            return false;
        }
    }

    return true;
}

//accenting
bool ok2(vector<int> data, int n) {
    if(n == 0 || n == 1) {
        return true;
    }

    for(int i = 1; i < n; i++) {
        int tmp = data[i - 1] - data[i];
        if(!(tmp >= -3 && tmp < 0)) {
            return false;
        }
    }

    return true;
}

bool ok(vector<int> data, int n) {
    return ok1(data, n) || ok2(data, n);
}

bool ok_remove(vector<int> data) {
    int n = data.size();
    for(int i = 0; i < n; i++) {
        vector<int> tmp(n - 1);
        for(int j = 0, k = 0; j < n; j++) {
            if(j != i) {
                tmp[k++] = data[j];
            }
        }

        if(ok(tmp, n - 1)) {
            return true;
        }
    }

    return false;
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int res = 0;
    int ts = SIZE;
    while(ts--) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        vector<int> data;
        int num;
        
        while(ss >> num) {
            data.push_back(num);
        }
        
        int n = data.size();
        if(ok_remove(data) || ok(data, n)) {
            res++;
        }

    }

    cout << res;
}