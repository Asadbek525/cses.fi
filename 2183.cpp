#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

signed main() {
    fast;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    // Missing coin sum
    sort(a.begin(), a.end());

    int currSum = 0;
    for(int i=0; i<n; i++) {
        if(a[i] > currSum+1) {
            cout << currSum+1 << endl;
            return 0;
        }
        currSum += a[i];
    }
    cout << currSum+1 << endl;
}