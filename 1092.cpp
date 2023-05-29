// Problem: Two Sets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1092
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
    if (n % 4 == 2 or n % 4 == 1){
    	cout << "NO";
    }else{
    	cout << "YES\n";
    	if (n % 4 == 0) {
    		cout << n/2 << endl;
    		for(int i = 1; i <= n; i += 4) {
    			cout << i << " " << i + 3 << " ";
    		}
    		cout << n/2 << endl;
    		for(int i = 1; i <= n; i += 4) {
    			cout << i + 1 << " " << i + 2 << " ";
    		}
    	}else{
    		cout << n/2 + 1 << endl;
    		cout << "1 2 ";
    		for(int i = 4; i <= n; i += 4) {
    			cout << i << " " << i + 3 << " ";
    		}
    		cout <<endl << n/2 << endl;
    		cout << "3 ";
    		for(int i = 4; i <= n; i += 4) {
    			cout << i + 1 << " " << i + 2 << " ";
    		}
    	}
    }
}


signed main()
{
    //fast;
    int t=1;
    //cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}