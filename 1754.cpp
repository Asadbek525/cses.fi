// Problem: Coin Piles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1754
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
    int a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	if (a > 2 * b) {
		cout << "NO";
	}else{
		int x = a - b;
		a = a - x * 2;
		b = b - x;
		if (a % 3 == 0){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}
	cout << endl;
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