// Problem: Number Spiral
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1071
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
	int x, y, ans;
	cin >> x >> y;
	if (x >= y) {
		if (x % 2 == 0) {
			ans = x * x - y + 1;
		}else{
			ans = (x - 1) * (x - 1) + y;
		}
	}else{
		if (y % 2 == 0){
			ans = (y - 1) * (y - 1) + x;
		}else{
			ans = y * y  - x + 1;
		}
	}
	cout << ans << endl;
}


signed main()
{
    fast;
    int t=1;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}