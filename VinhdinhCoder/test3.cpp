#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{	
	ll n;
	cin >> n;
	if ( n==0) cout << "0"<<endl;
	if ( n == 1) cout << "1"<<endl;
	if ( n>=2)
	{
		ll fn , f0=0, f1=1;
		cout << "0"<<endl<<"1"<<endl;
		for ( ll i =2;i<=n;i++)
		{
			fn =f0+f1;
			f0=f1;
			f1=fn;
			
			
			cout << fn<<endl;
		}
		
	}
	



return 0;
}

