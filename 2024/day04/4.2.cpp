#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    long long ans = 0;

    vector<string> a;
    string line;
    while(getline(cin, line)) {
        a.push_back(line);
    }
    
    int N = a.size();
    int M = a[0].size();

    for(int i = 1; i < N - 1; i++) {
        for(int j = 1; j < M - 1; j++) {
            if (a[i][j] == 'A') {
                if ((a[i-1][j-1] == 'M' && a[i+1][j+1] == 'S') || 
                    (a[i-1][j-1] == 'S' && a[i+1][j+1] == 'M')) {
                    if ((a[i-1][j+1] == 'M' && a[i+1][j-1] == 'S') || 
                        (a[i-1][j+1] == 'S' && a[i+1][j-1] == 'M')) {
                        ans++;
                    }
                }
            }
        }
    }

    cout << ans;

    return 0;
}