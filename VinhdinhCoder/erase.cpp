#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    vector <int> a;
    for (int i = 1; i <= n; ++i) a.push_back(i);

    int i = 0, cnt = 1;
    while (a.size() > 1) {
        if (cnt % 2 == 0) {
            a.erase(a.begin() + i);
        }
        else ++i;
        if (i == a.size()) i = 0;
        ++cnt;
    }
    cout << a[0];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("main.inp", "r", stdin);
    freopen("main.out", "w", stdout);
#endif

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
