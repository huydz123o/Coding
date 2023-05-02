#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	ll n;
	cin >> n;
	ll s=0;
	ll i = ( n-1)/2;
	if ( (n -1)%2==1) i++;
	cout << i*i;
	return 0;
	
}
