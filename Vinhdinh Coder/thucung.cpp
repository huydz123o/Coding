#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define endl "\n"

using namespace std;
ll a[1000], b[1000] , c[1000], n;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	cin >> n;
	ll sum = 0;
	for (ll i = 1; i <= n; i++)
	{
		cin >> a[i] >> b[i];
	}

	for (ll i = 1; i <= n; i++)
	{
		sum = sum + b[i] - a[i];
		c[i] = sum;
	}
	ll mx = c[1];
	for (ll i = 1; i <= n; i++)
	{
		if (mx < c[i])
		{
			mx = c[i];
		}
	}
	cout << mx;
	return 0;
}
