// Problem: Two Knights
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1072
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


int func(int k) {
	if (k == 1)
		return 0;
	return k * k * (k * k - 9) - 16 + 24 * k;
}

void solve()
{
    int k;
    cin >>k;
    
    for(int i = 1; i <= k; i++) {
    	cout << func(i)/2 << endl;
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