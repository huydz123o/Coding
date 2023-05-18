#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b);
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
