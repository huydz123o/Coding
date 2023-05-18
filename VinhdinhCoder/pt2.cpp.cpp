#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll a [10000], n;
    cin >> n;
        for ( ll i =0 ; i< n; i++)
    {
        cin >> a[i];
    }
        ll max = a[0];
        ll min = a[0];
        for ( ll i = 0 ; i< n ; i++)
    {


        if ( a[i] > max)
        {
            max = a[i];
        }
        if ( a[i]< min )
        {
            min = a[i];
        }
    }
    cout << "SO LON NHAT:"<< " " << max << endl << "SO BE NHAT:"<< " " << min;

    return 0;
}
