#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    int x;
    cin >> x;
    for(int i = 0; i < n; i++) {
    	int y;
    	cin >> y;
    	if (mp[x-y]) {
    		cout << mp[x-y] << " " << i + 1;
    		return 0;
    	}else{
    		mp[y] = i + 1;
    	}
    }
    cout << "IMPOSSIBLE";
}