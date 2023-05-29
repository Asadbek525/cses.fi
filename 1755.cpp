// Problem: Palindrome Reorder
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1755
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
    string s;
    cin >> s;
    int n = s.size();
    int a[100] = {0};
    for (int i = 0; i < n; i++) {
    	a[s[i]]++;
    }
    char c;
    int count = 0;
    for(int i = 0; i < 100; i++) {
    	if(a[i] % 2) {
    		if (count) {
    			cout << "NO SOLUTION";
    			return;
    		}else{
    			count = a[i];
    			c = i;
    		}
    	}
    }
    for(int i = 0; i < 100; i++) {
    	if (a[i] % 2 == 0) {
    		for(int j = 0; j < a[i] / 2; j++) {
    			cout << char(i);
    		}
    	}
    }
    while(count--)
    	cout << c;
	for(int i = 99; i>= 0;i--) {
		if (a[i] % 2 == 0) {
    		for(int j = 0; j < a[i] / 2; j++) {
    			cout << char(i);
    		}
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