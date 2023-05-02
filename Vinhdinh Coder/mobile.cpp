#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	ll n,s;
	cin >> n;
	s=0;
	for ( ll i=0; i <=n;i+=3)
	{
		s=s+i;
	}
	cout << s;
	
	
}
