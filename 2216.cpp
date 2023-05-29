// Problem: Collecting Numbers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2216
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
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int curr = 1;
    int res = 0;

    map<int, bool> mp;
    for(int i = 0; i < n; i++) {
    	if (mp[a[i] - 1]) mp[a[i]] = 1;
    	else{
    		res += 1;
    		mp[a[i]] = 1;
    	}
    }
    cout << res;
    
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










