#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

typedef unsigned long long ull;
typedef long long ll;


ll gt(ll a)
{
    if (a == 1) return 1;
    return a * gt(a - 1);
}
ll b[10001];
void solve()
{
    ll n;
    cin >> n;
    ll a = gt(n);
    ll cnt = 0;
    for (ll i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            cnt++;
            if (i != a / i)
            {
                cnt++;
            }
        }
    }
    cout << cnt;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    ll t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
