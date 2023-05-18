#include <bits/stdc++.h>
#define ll long long

using namespace std;

/*
int tinh_tong(vector <int> &a, int index){
    if(index == a.size()) return 0;
    return a[index] + tinh_tong(a, index + 1);
}
*/

string del(string a)
{
    reverse(a.begin(), a.end());
    while(a.back() == '0') a.pop_back();
    reverse(a.begin(), a.end());
    return a;
}
bool cmp(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(),b.end());
    while(a.size() < b.size()) a += "0";
    while(a.size() > b.size()) b += "0";
    reverse(a.begin(), a.end());
    reverse(b.begin(),b.end());

    return a >= b;
}

int main()
{
    cin.tie(0); ios_base::sync_with_stdio(0);
    string a,b;
    cin>>a>>b;

   string c = del(a), d = del(b);
   if(cmp(c, b)) cout << a;
   else cout << b;
    return 0;
}
