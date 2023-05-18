#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    ll m , n , k;
    ll s=0;
    do{cin >> m>>n>>k;}
    while ( m>n || n > k||m>k);
    if ( k-n==n-m)
    {
        s=s+m+n+k;
        cout <<s;
    }
    else cout << "KHONG PHAI CAP SO CONG";
    return 0;
}
