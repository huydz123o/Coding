#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


void solve()
{
    ll n;
    cin >> n;
    ll sum = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0) sum += i;
        while (n % i == 0) n /= i;
    }
    if (n > 1) sum += n;
    cout << sum;

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
