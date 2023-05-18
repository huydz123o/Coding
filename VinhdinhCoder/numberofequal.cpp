#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll a[100002], b[100002];

void solve()
{
    ll n, m;
    cin >> n >> m;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    for (ll i = 1; i <= m; i++) cin >> b[i];
    ll res = 0;
    ll i = 1, j = 1;
    a[n + 1] = 1e9 + 7777;
    b[m + 1] = 1e9 + 7777;
    ll cnt1 = 1, cnt2 = 1;
    while (i <= n || j <= m)
    {

        while ( a[i] == a[i + 1] && i <= n)
        {
            i++;
            cnt1++;
        }
        while (b[j] == b[j + 1] && j <= m)
        {
            j++;
            cnt2++;
        }
        if (a[i] == b[j])
        {
            res += cnt1 * cnt2;
            i++;
            j++;
            cnt1 = 1, cnt2 = 1;
        }
        else if (j > m || (i <= n && a[i] < b[j]))
        {
            i++;
            cnt1 = 1;
        }
        else
        {
            j++;
            cnt2 = 1;
        }

    }
    cout << res;


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
