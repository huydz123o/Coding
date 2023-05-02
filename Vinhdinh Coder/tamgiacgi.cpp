#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    float a,b,c;
    cin >> a >> b >> c;
    if ( a+b>c && b+c>a&& a+c>b)
    {
        if ( a*a + b*b == c*c || b*b + c*c == a*a | a*a+c*c==b*b)
        {
            if ( a ==b || b==c || a==c)
            {
                cout <<"VUONG CAN";
            }
            else cout << "VUONG";
        }
        else if ( a==b || a==c || b==c)
        {
            if ( a==b && a==c && b==c) cout << "DEU";
            else cout <<"CAN";
        }
        else cout << "THUONG";

    }
    else cout <<"KHONGPHAITAMGIAC";
    return 0;
}
