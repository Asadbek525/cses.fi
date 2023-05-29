#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i] >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int ans = 0, c = 0;
    for(int i = 0, j = 0; i < n;) {
    	if (a[i] <= b[j]){
    		c++;
    		i++;
    		ans = max(ans, c);
    	}else{
    		j++;
    		c--;
    	}
    }
    cout << ans;
}