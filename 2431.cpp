// Problem: Digit Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2431
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
#define debug(x) cout << #x << " = " << x << endl;



void solve()
{
    int k;
    cin >> k;
    int d = 1;
    int q = 9;
    while(q * d < k){
    	k -= q*d;
    	q *= 10;
    	d++;
    }
    int a = k / d;
    int b = k % d;
    k = pow(10, d - 1);
    if (b == 0) {
    	cout << (k + a - 1) % 10;
    }else{
    	a += k;
    	string x = to_string(a);
    	cout << x[b - 1];
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