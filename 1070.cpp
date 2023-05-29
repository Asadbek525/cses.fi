// Problem: Permutations
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1070
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
    int n;
    cin >> n;
    if (n == 2 or n == 3) {
    	cout << "NO SOLUTION";
    }else{
    	for(int i = 1; i <= n; i++) {
    		cout << i++ << " ";
    	}
    	for(int i = 2; i <= n; i++) {
    		cout << i++ << " ";
    	}
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