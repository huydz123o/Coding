#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    double s=1,n,i=1;
    cin >>n;
    while ( s <=n)
    {
        i++;
        s=s+1/(i*i);
    }
    cout << setprecision(9)<<fixed<<s;

    return 0;
}
