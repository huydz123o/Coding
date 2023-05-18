#include <bits/stdc++.h>
#define ll long long

using namespace std;

double a[101][101];

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {

            cin>>a[i][j];
        }
    }
    double  mx=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            mx=max(mx,a[i][j]);
        }
        cout<<setprecision(2)<<fixed<<mx<<endl;
        mx=0;
    }
    return 0;
}
