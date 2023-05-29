#include<bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

signed main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> h(n);
    set<pair<int,int>> a;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.insert({-x, i});
    }

    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        auto y = a.lower_bound({-x, -1});
        if(y == a.end()) {
            cout << -1 << endl;
        }
        else {
            cout << -y->first << endl;
            a.erase(y);
        }
    }
}
