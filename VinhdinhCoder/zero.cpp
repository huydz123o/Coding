#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


ll gt(ll a)
{
    if ( a == 1) return 1;
    return a * gt(a - 1);
}
void solve()
{
    ll n;
    cin >> n;
    ll a = gt(n);
    string s = "";
    while (a)
    {
        s += char(a % 10 + 48);
        a /= 10;
    }
    ll i = 0, cnt = 0;
    while (s[i] == '0')
    {
        cnt++;
        i++;
    }
    cout << cnt;
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
