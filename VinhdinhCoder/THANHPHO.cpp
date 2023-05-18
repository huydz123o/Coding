#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

const ll mxn = 1000;
pair<double , double>a[mxn];
double b[mxn][mxn];
double c[mxn];

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> a[i].first >> a[i].second;
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            b[i][j] = sqrt((a[j].first - a[i].first) * (a[j].first - a[i].first) + ((a[j].second - a[i].second) * (a[j].second - a[i].second)));

        }
    }
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            cout << setprecision(1) << fixed << b[i][j] << " ";
        }
        cout << endl;
    }
    double sum = 0;
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            sum += b[i][j];
        }
        c[i] = sum;
        sum = 0;
    }
    double mi = mxn;
    ll hang;
    for (ll i = 1; i <= n; i++)
    {
        if (mi > c[i])
        {
            mi = c[i];
            hang = i;
        }
    }
    double mx = 0, mn = mxn;
    ll vitri1, vitri2;
    for (ll i = 1; i <= n; i++)
    {
        if (mx < b[hang][i])
        {
            mx = b[hang][i];
            vitri1 = i;
        }
        if (mn > b[hang][i])
        {
            mn = b[hang][i];
            vitri2 = i;
        }
    }
    cout << "Khoang cach tu tram cuu ho den phuong xa nhat la " << mx << ". Tu phuong " << vitri2 << "->" << vitri1 << endl;
    for (ll i = 1; i <= n; i++)
    {
        if (b[hang][i] == 0.0)
        {
            cout << "Can dat tram cuu ho o phuong " << i << " co toa do (" << setprecision(0) << fixed << a[i].first << "," << a[i].second << ")";
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
