#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll a[20][20],n,s=0;
    cin >> n ;
    for ( ll i =0 ;i <n;i++)
    {
        for ( ll j=0;j<n;j++)
        {
            cin >>a[i][j];
        }
    }

        for ( ll i =0 ;i <n;i++)
    {   ll mx= a[i][0];
        for ( ll j=0;j<n;j++)
        {
            if ( mx < a[i][j])
            {
                mx=a[i][j];
            }

        }
        cout <<mx<<'\n';
    }


    return 0;
}
