#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000
#define ll long long

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> a(SIZE), b(SIZE);
    for(int i = 0; i < SIZE; i++) {
        cin >> a[i] >> b[i];
    }

    ll res = 0;
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(a[i] == b[j]) {
                res += a[i];
            }
        }
    }

    cout << res; 
}