#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	ll n,i,j;
	cin >> n;
	for ( i =1;i<=n;i++)
		{
			for (j =1 ;j<=2*n;j++)
			{
			if  ( j >= n-i+1 && j <= n+i-1) cout << "*";
			else cout << " ";
			
			}
			cout << endl;
		}
	
	
}
