// Problem: Towers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1073
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
    int n, x;
    cin >> n;
    vi a(n,2e9);
    for (int i = 0; i < n; i++) {
    	cin >> x;
    	int l = 0, r = n;
    	while(l < r) {
    		int mid = (l + r) / 2;
    		if (a[mid] <= x) {
    			l = mid + 1;
    		}else{
    			r = mid;
    		}
    	}
    	a[l] = x;
    }
    int c = 0;
    for(int i = 0; i < n; i++) {
    	if(a[i] != 2e9)
    		c++;
    	else break;
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