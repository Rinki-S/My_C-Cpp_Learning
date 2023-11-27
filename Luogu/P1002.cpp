#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long ways[25][25] = {0};
    bool horse_leap[25][25] = {false};
    int b[2], horse[2];
    cin >> b[0] >> b[1] >> horse[0] >> horse[1];
    b[0]++;
    b[1]++;
    horse[0]++;
    horse[1]++;
    ways[1][1] = 1;

    horse_leap[horse[0]][horse[1]] = true;
    horse_leap[horse[0] + 1][horse[1] + 2] = true;
    horse_leap[horse[0] + 1][horse[1] - 2] = true;
    horse_leap[horse[0] - 1][horse[1] + 2] = true;
    horse_leap[horse[0] - 1][horse[1] - 2] = true;
    horse_leap[horse[0] + 2][horse[1] + 1] = true;
    horse_leap[horse[0] + 2][horse[1] - 1] = true;
    horse_leap[horse[0] - 2][horse[1] + 1] = true;
    horse_leap[horse[0] - 2][horse[1] - 1] = true;

    for (int i = 1; i <= b[0]; i++) {
        for (int j = 1; j <= b[1]; j++) {
            if ((i != 1 || j != 1) && !horse_leap[i][j]) {
                ways[i][j] = ways[i - 1][j] + ways[i][j - 1];
            }
        }
    }
    cout << ways[b[0]][b[1]];
    return 0;
}
