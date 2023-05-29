// Problem: Collecting Numbers II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2217
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
	int n,m; cin>>n>>m;
    int l = 1;
    int ind[n+2] = {0}, a[n+1] = {0};
    ind[n+1] = n+1;
    for (int i = 1; i <= n; i++) {
		int x; cin>>x;
		ind[x] = i;
		a[i] = x;
    }
    int c = 1;
    for (int i = 1; i <= n; i++) {
		if (l > ind[i]) 
		c++;
		l = ind[i];
    }
    while(m--) {
		int x,y; cin>>x>>y;
		int r = a[x], s = a[y];
		swap(a[x], a[y]);
		if (ind[r-1] <= ind[r] && ind[r-1] > y) c++;
		if (ind[r-1] > ind[r] && ind[r-1] <= y) c--;
		if (ind[r] <= ind[r+1] && y > ind[r+1]) c++;
		if (ind[r] > ind[r+1] && y <= ind[r+1]) c--;		
		ind[r] = y;
		if (ind[s-1] <= ind[s] && ind[s-1] > x) c++;
		if (ind[s-1] > ind[s] && ind[s-1] <= x) c--;
		if (ind[s] <= ind[s+1] && x > ind[s+1]) c++;
		if (ind[s] > ind[s+1] && x <= ind[s+1]) c--;	
		ind[s] = x;
		cout<<c<<endl;
    }
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