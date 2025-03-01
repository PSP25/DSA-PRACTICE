#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> grid(n, vector<char>(n, '.'));

    for (int i = 1; i <= n; i++) {
        int j = n + 1 - i;
        if (j < i) continue;

        char col = (i % 2 == 1) ? '#' : '.';

        for (int r = i - 1; r <= j - 1; r++) {
            for (int c = i - 1; c <= j - 1; c++) {
                grid[r][c] = col;
            }
        }
    }

    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cout << grid[r][c];
        }
        cout << endl;
    }

    return 0;
}
