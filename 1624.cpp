// Problem: Chessboard and Queens
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1624
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

vector<vector<bool>> used;

bool func(vector<pair<int, int>>& a){
    int n = 8;
    for(int i = 0; i < n; i++) {
        auto [x, y] = a[i];
        for(int j = 0; j < n; j++) {
            if (i == j)
                continue;
            auto [x1, y1] = a[j];
            if(used[x][y] or used[x1][y1] or abs(x1 - x) == abs(y - y1))
                return false;
        }
    }
    return true;
}

void solve()
{
    used.resize(8, vector<bool>(8));
    char c;
    int n = 8;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> c;
            used[i][j] = c == '*';
        }
    }
    int ans = 0;
    vector<int> a = {0,1,2,3,4,5,6,7};
    do{
        vector<pair<int, int>>x(8);
        for(int i = 0; i < 8; i++) {
            x[i] = {i, a[i]};
        }
        ans += func(x);
    }while(next_permutation(a.begin(), a.end()));
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