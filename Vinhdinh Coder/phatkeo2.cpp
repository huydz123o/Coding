#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll n,k,s=1;
    cin >>n >>k;
    ll res =1,sum =1;
    for ( ll i =2 ; i <=n; i++)
    {
        sum =sum +3;
        res = res +sum;
            if ( k >=res)
        {
            s++;
        }

    }

    cout <<s;
    return 0;
}
