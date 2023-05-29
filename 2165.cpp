// Problem: Tower of Hanoi
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2165
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


vector<pair<int, int>> build(int n, int a, int b) {
	if (n == 1){
		return {{a,b}};
	}
	int c = 6 - a - b;
	auto p = build(n-1,a,c);
	p.push_back({a,b});
	auto q = build(n-1,c,b);
	p.insert(p.end(),q.begin(),q.end());
	return p;
}


void solve()
{
    int n;
	cin >> n;
	auto p = build(n,1,3);
	cout << p.size();ln;
	for(auto q : p){
		auto [x,y] = q;
		cout << x << " " << y;ln;
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