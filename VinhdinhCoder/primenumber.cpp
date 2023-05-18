#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool isprime ( ll n)
{	
	if ( n <2) return false;
	if ( n!=2 && n%2 == 0) return false;
	for ( ll i =3 ; i*i<=n; i+=2)
	{
		if ( n%i == 0) return false;
	}
	return true;
	
}
int main ()
{
	ll n; 
	cin >> n;
	for ( ll i =2; i < n; i++)
	{
	if (isprime(i)) cout << i<<endl;
	}
	return 0;
	
	
	
}
