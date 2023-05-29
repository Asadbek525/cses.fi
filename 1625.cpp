// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1625
// Memory Limit: 512 MB
// Time Limit: 1000 ms
//
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fast ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define all(x) (x).begin(),(x).end()
#define ln cout<<'\n'
#define X first
#define Y second

#define vi vector<int>
#define vvi vector<vi>

string s;

int rec(int i, int j, bool vis[][9], int n)
{
    if (n > 48) return 0;
    if (i == 7 && j == 1) {
        if (n == 48) return 1;
        return 0;
    }
    int ans = 0;
    vis[i][j] = true;
    if (vis[i][j+1] and vis[i][j - 1] and !vis[i+1][j] and !vis[i-1][j]) {
        return 0;
    }
    if (!vis[i][j-1] and vis[i+1][j] and !vis[i][j+1] and vis[i-1][j]) {
        return 0;
    }
    if(s[n] == '?' or s[n] == 'R') {
        if (!vis[i][j+1]) {
            vis[i][j+1] = true;
            ans += rec(i, j+1, vis, n+1);
            vis[i][j+1] = false;
        }
    }
    if(s[n] == '?' or s[n] == 'L') {
        if (!vis[i][j-1]) {
            vis[i][j-1] = true;
            ans += rec(i, j-1, vis, n+1);
            vis[i][j-1] = false;
        }
    }
    if(s[n] == '?' or s[n] == 'U') {
        if (!vis[i-1][j]) {
            vis[i-1][j] = true;
            ans += rec(i-1, j, vis, n+1);
            vis[i-1][j] = false;
        }
    }
    if(s[n] == '?' or s[n] == 'D') {
        if (!vis[i+1][j]) {
            vis[i+1][j] = true;
            ans += rec(i+1, j, vis, n+1);
            vis[i+1][j] = false;
        }
    }
    vis[i][j] = false;
    return ans;
}


void solve()
{
    // Grid Paths
    //??????R??????U??????????????????????????LD????D?
    cin >> s;
    bool vis[9][9];
    memset(vis, false, sizeof(vis));
    for(int i = 0; i < 9; i++) {
        vis[0][i] = true;
        vis[8][i] = true;
        vis[i][0] = true;
        vis[i][8] = true;
    }
    int ans = rec(1ll, 1ll, vis, 0);
    cout << ans;


}


signed main()
{
    fast;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}