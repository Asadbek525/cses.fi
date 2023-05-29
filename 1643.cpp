#include<bits/stdc++.h>
using namespace std;
#define int long long


signed main()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    int best = x, sum = x;
    for(int i = 1; i < n; i++) {
    	cin >> x;
    	sum = max(x, sum + x);
    	best = max(best, sum);
    }
    cout << best;
}