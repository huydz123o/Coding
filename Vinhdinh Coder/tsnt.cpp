#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


void solve()
{
    ll n;
    cin >> n;
    vector <pair<ll, ll>> tsnt;
    for (ll i = 2; i * i <= n; i++)
    {
        pair<ll, ll> cnt = {0, 0};
        if (n % i == 0) cnt.first = i;
        while (n % i == 0) {
            cnt.second++;
            n /= i;
        }
        if (cnt.first > 0 && cnt.second > 0) tsnt.push_back(cnt);
    }
    if (n > 1) tsnt.push_back({n, 1});

    for (auto it : tsnt) {
        cout << it.first << '^' << it.second << '\n';
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
