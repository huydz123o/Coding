#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
	double a,b,c;
	cin >> a >> b >> c;
	if ((a>=b+c)|| (  b>=a+c)||( c>= a+b))

	{
		cout << "KHONGPHAITAMGIAC"	;
		
	}
	else 
	{
		if ( a==b && b==c && c == a)
		{
			cout << "DEU";
		}else
		if ( a==b || b==c || a==c)
				{
					cout << "CAN";
					
				}
				 else if (( a*a==b*b+c*c)|| ( c*c==a*a+b*b)||(b*b==a*a+c*c))
				{
					cout <<"VUONG";
				}
				  else if ( ( a*a==b*c+c*c )||( b*b==a*a+c*c)||( c*c==a*a+b*b) && ( a==b || b==c || a==c))
				{
					cout << "VUONG CAN";
				}
				else cout << "THUONG";

	}
	return 0;
}
