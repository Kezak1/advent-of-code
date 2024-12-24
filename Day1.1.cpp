#include <bits/stdc++.h>

using namespace std;

#define SIZE 1000

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> a(SIZE);
    vector<int> b(SIZE);
    
    for(int i = 0; i < SIZE; i++) {
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long result = 0;
    for(int i = 0; i < SIZE; i++) {
        result += abs(a[i] - b[i]);
    }

    cout << result;
    
    return 0;
}