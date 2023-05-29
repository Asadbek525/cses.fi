// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084
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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    vi b(m);
    for(int i = 0; i < m; i++) {
    	cin >> b[i];
    }
    sort(all(a));
    sort(all(b));
    int c = 0;
    for(int i = 0, j = 0; i < n and j < m;) {
    	if (abs(a[i] - b[j]) <= k){
    		c++;
    		j++;
    		i++;
    	}else if(a[i] > b[j]){
    		j++;
    	}else{
    		i++;
    	}
    }
    cout << c;
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