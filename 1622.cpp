// Problem: Creating Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1622
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
	vector<char> s;
	char c;
	while(cin >> c){
		s.push_back(c);
	}
	sort(s.begin(), s.end());
	vector<vector<char>> ans;
	do{
		ans.push_back(s);
	}while(next_permutation(s.begin(), s.end()));
	cout << ans.size() << endl;
	for(auto x:ans) {
		for(auto y:x)
			cout << y;
		cout << endl;
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