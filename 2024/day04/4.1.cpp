#include <bits/stdc++.h>
using namespace std;

#define N 140

int CNT(const string &line) {
    int cnt = 0;
    int n = line.size();
    for(int i = 0; i < n - 3; i++) {
        if(line.substr(i, 4) == "XMAS" || line.substr(i, 4) == "SAMX") {
            cnt++;
        }
    }

    return cnt;
}

int check_rows(char a[][N]) {
    int res = 0;
    for(int i = 0; i < N; i++) {
        string row;
        for(int j = 0; j < N; j++) {
            row += a[i][j];
        }
        res += CNT(row);
    }

    return res;
}

int check_columns(char a[][N]) {
    int res = 0;
    for(int j = 0; j < N; j++) {
        string column;
        for(int i = 0; i < N; i++) {
            column += a[i][j];
        }
        res += CNT(column);
    }

    return res;
}

int check_diag(char a[][N]) {
    int res = 0;

    // top-left to bottom-right
    for (int k = 0; k < 2 * N - 1; ++k) {
        string diag;
        for (int i = max(0, k - N + 1), j = max(0, N - 1 - k); i < N && j < N; i++, j++) {
            diag += a[i][j];
        }
        res += CNT(diag);
    }

    // top-right to bottom-left
    for (int k = 0; k < 2 * N - 1; ++k) {
        string diag;
        for (int i = max(0, k - N + 1), j = min(N - 1, k); i < N && j >= 0; i++, j--) {
            diag += a[i][j];
        }
        res += CNT(diag);
    }

    return res;
}

int main() {
    freopen("input.txt", "r", stdin);

    char a[N][N];
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    cout << check_rows(a) + check_columns(a) + check_diag(a);

    return 0;
}