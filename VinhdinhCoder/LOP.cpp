#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    string s;
    while(getline(cin,s))
    {
        string s2="";
        for(ll i=s.size()-1;i>0;i--)
        {
            if(s[i]!=' ')
            {
                s2+=s[i];
            }
            else break;
        }
        reverse(s2.begin(),s2.end());
        cout<<s2<<endl;
    }
    return 0;
}
