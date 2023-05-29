// Problem: Distinct Numbers
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1621
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
    set<int> s;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
    	int x;
    	cin >> x;
    	s.insert(x);
    }
    cout << s.size();
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