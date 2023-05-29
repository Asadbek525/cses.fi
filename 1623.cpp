// Problem: Apple Division
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1623
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



void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int mn = 1e12;
    for(int i = 0; i <= (1<<n); i++) {
        int sum1 = 0, sum2 = 0;
        int m = i;
        for(int k = 0; k < n; k++) {
            sum1 += m % 2 * a[k];
            m /= 2;
        }
        sum2 = sum - sum1;
        mn = min(mn, abs(sum1 - sum2));
    }
    cout << mn;
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