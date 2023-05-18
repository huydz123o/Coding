#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a[1000];

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin >> n;
    for(int i=0 ; i <n;i++)
    {
        cin >> a[i];
    }
    ll k =0;
    for ( ll i =0; i < n;i++)
    {
        if ( a[i]==1) k--;
        if ( a[i]==2) k++;
    }
    cout <<abs(k);
    return 0;
}
