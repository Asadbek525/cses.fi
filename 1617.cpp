// Problem: Bit Strings
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1617
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

int bin(int a, int n, int m = 1000000007){
	if (n == 0) return 1;
	int p = bin(a, n/2);
	if (n % 2) return p * p % m * 2 % m;
	return p * p % m;
}

void solve()
{
    int n;
    cin >> n;
    cout << bin(2, n);
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