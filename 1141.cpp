// Problem: Playlist
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1141
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
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    int ans = 0, l = 0;
    for(int i = 0; i < n; i++) {
    	int x = a[i];
    	if (mp.find(x) != mp.end()){
    		l = max(l,mp[x] + 1);
    		ans = max(i - l + 1, ans);
    		mp[x] = i;
    	}else{
    		mp[x] = i;
    		ans = max(i - l + 1, ans);
    	}
    }
    
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