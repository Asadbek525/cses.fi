#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        a[i] = {y, x};
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int bx = 0;
    for(int i = 0; i < n; i++) {
        if (a[i].second >= bx) {
            bx = a[i].first;
            ans++;
        }
    }
    cout << ans;
}