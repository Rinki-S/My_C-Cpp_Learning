#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int carpets[n][4];
    int carpets_area[n][2];
    for (int i = 0; i < n; i++) {
        cin >> carpets[i][0] >> carpets[i][1] >> carpets[i][2] >> carpets[i][3];
        carpets_area[i][0] = carpets[i][0] + carpets[i][2];
        carpets_area[i][1] = carpets[i][1] + carpets[i][3];
    }
    int x, y;
    cin >> x >> y;
    int ans = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (x >= carpets[i][0] && x <= carpets_area[i][0] &&
            y >= carpets[i][1] && y <= carpets_area[i][1])
        {
            ans = i + 1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}