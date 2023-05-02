#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll luythua( ll a,ll n)
{
    ll res =1;
   for ( int i = 1; i <=n; i++) res *=a;
   return res;
}

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll n,m;
    cin >> m >> n;
    ll res =0;
    for ( int i =1 ; i<=m;i++)
    {
        res +=luythua(i,n);
    }
    cout << res;
    return 0;
}
