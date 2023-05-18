#include <bits/stdc++.h>
#define ll long long

using namespace std;
ll a[1000],n;
bool isprime(ll n)
{
    if (n <2) return false;
    if ( n%2==0 && n!=2) return false;
    for (ll i =3;i*i<n;i+=2)
    {
        if ( n%i==0)
            {
               return false;
            }
            return true;
    }

}

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    cin >> n;
    for (ll i=1;i<=n;i++)
    {
        cin >>a[i];
    }
    ll p=0;
    for (ll i=1;i<=n;i++)
    {
        if(isprime(a[i]))
        {
            p=i;
            cout <<a[i]<< " "<<p<<'\n';

        }

    }cout <<"KHONG CO SO NGUYEN TO";





    return 0;
}
