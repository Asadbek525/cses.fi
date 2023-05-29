// Problem: Repetitions
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1069
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
    int mx = 0;
    string s;
    cin >> s;
    int n = s.size(), c = 1;
    for(int i = 1; i < n; i++) {
    	if (s[i] == s[i - 1]){
    		c++;
    	}
    	else{
    		mx = max(mx, c);
    		c = 1;
    	}
    }
    cout << max(mx, c);
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