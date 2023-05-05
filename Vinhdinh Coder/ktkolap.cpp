#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mxn = 1e5;
ll a[mxn];
void solve()
{
    string s;
    cin >> s;
    for (ll i = 0; i <= mxn; i++)
    {
        a[i] = 0;
    }
    for (ll i = 0; i < s.size(); i++)
    {
        a[s[i] - 'A']++;
    }
    for (ll i = 0; i <= mxn; i++)
    {
        if (a[i] == 1)
        {
            cout << char(i + 'A');
        }
    }
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
