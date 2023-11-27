#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> map(n, vector<int>(n, 0));
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) {
            break;
        }
        map[a - 1][b - 1] = c;
    }
}