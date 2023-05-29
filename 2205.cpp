// Problem: Gray Code
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2205
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

vector<string> gray(int n) {
	if (n == 1) {
		return {"0", "1"};
	}
	auto rg = gray(n - 1);
	auto g = rg;
	reverse(rg.begin(), rg.end());
	vector<string> ans((1<<n));
	for(int i = 0; i < (1<<(n-1)); i++) {
		ans[i] = "0" + g[i];
		ans[(1<<(n-1)) + i] = "1" + rg[i];
	}
	return ans;
}

void solve()
{
	int n;
	cin >> n;
	auto a = gray(n);
	for(auto x : a) {
		cout << x << endl;
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