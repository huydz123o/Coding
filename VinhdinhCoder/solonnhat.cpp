#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll max ( ll a , ll b , ll c)
{
	if( a >= b && a >= c) return a;
	if ( b>=a && b >= c) return b;
	if( c>=a && c >= b) return c; 
	
	
}
int main ()
{
	ll a,b,c;
	cin >> a >> b >> c;
	cout << "So lon nhat: " << max(a,b,c);

	return 0;
}
