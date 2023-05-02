#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	ll x,y,u,v;
	cin >> x >> y >> u >> v;
	ll A = sqrt(x*x+y*y);
	ll B = sqrt(u*u+v*v);
	if ( A==B)
	{
		cout << "BANG NHAU";
	}
	else
	{
		if ( A<B )
		{
			cout << "A";
		}
		else cout << "B";
	}

	return 0;
	
	
	
}
