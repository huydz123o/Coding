#include <bits/stdc++.h>
#define ll long long

using namespace std;
int  ucln( int a, int  b)
{
    ll r,t;
    if ( a>b)
    {
        if ( a%b==r)
        {

                while ( t!=0)
            {
                t=b%r;
                b=r;
                r=t;
            }
        return t-1;
        }
    }
}

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll a,b;
    cin >> a >> b;
    cout << ucln(a,b);
    return 0;
}
